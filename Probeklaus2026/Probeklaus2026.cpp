#include <iostream>
#include <vector>

class I {
protected:
	int value = 0;
	virtual std::ostream& print(std::ostream& out)const = 0;
public:
	virtual ~I() = default;

	friend std::ostream& operator<<(std::ostream& out, const I& obj) {
		//out << obj.value;
		obj.print(out);
		return out;
	}

	I& operator=(int value) {
		if (value >= 0) { //var kann anders genannt werden
			this->value=value;
		}
		return *this;
	}

	operator int() {
		return value;
	}

};

class X : public I {
protected:
	std::ostream& print(std::ostream& out) const override{
		out << "X:" << value << std::endl;
		return out;
	}
public:
	X() {
		std::cout << "X created\n";
	}
	~X() override {
		std::cout << "X deleted\n";
	}

};

class Y : public I {
protected:
	std::ostream& print(std::ostream& out) const override {
		out << "X:" << value << std::endl;
		return out;
	}
public:
	Y() {
		std::cout << "Y created\n";
	}
	~Y() override {
		std::cout << "Y deleted\n";
	}

};


class Z : public I {
protected:
	std::ostream& print(std::ostream& out) const override {
		out << "X:" << value << std::endl;
		return out;
	}
public:
	Z() {
		std::cout << "Z created\n";
	}
	~Z() override {
		std::cout << "Z deleted\n";
	}

};

std::shared_ptr<I> get_instance(int i){
	std::shared_ptr<I> instance;
	if (i % 3 == 0) {
		instance = std::make_shared<X>();
	}
	else if (i%3 == 1) {
		instance = std::make_shared<Y>();
	}
	else {
		instance = std::make_shared<Z>();
	}
	return instance;
}


int main(int arcs, const char * argv[]) {
	const uint8_t count = 5;
	std::vector<std::shared_ptr<I>> list;
	for (int i = 0;i < count;i++) {
		list.push_back(get_instance(i));
		*list[i] = i;
	}
	int sum = 0;
	for (auto i : list) {
		std::cout << *i;
		sum += *i;
	}
	std::cout << "sum " << sum << std::endl;
	return EXIT_SUCCESS;
}

//military systems