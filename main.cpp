#include <iostream>
#include "Calculator.hpp"

int main() {
	std::cout << "Hello World\n";
	std::cout << "add\n";
	std::cout << Calculator::add(3, 4) << '\n';
	std::cout << "remove\n";
	std::cout << Calculator::remove(10, 1) << '\n';
	std::cout << Calculator::multiply(10, 10) << '\n';
	std::cout << "end of the program\n";
	return 0;
}
