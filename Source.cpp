#include <iostream>

class Device {	
public:
	Device() {
		std::cout << "Device constructor called" << std::endl;
	}
	~Device() {
		std::cout << "Device destructor called" << std::endl;
	}
};

class Computer {
public:
	Computer() {
		std::cout << "Computer constructor called" << std::endl;
	}
	~Computer() {
		std::cout << "Computer destructor called" << std::endl;
	}
};

class Laptop : public Computer, public Device {
public:
	Laptop() {
		std::cout << "Laptop constructor called" << std::endl;
	}
	~Laptop() {
		std::cout << "Laptop destructor called" << std::endl;
	}
};

int main() {
	Laptop Laptop_instance;

	return 0;
}