#include <iostream>
#include "Calculator.hpp"

int main() {
	std::cout << "Hello World\n";
	std::cout << Calculator::add(3, 4) << '\n';
	std::cout << Calculator::remove(10, 1) << '\n';
	std::cout << Calculator::multiply(10, 10) << '\n';
	return 0;
}
