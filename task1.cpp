#include <iostream>

int main() {
	int a, b;
	std::cin >>  a;
	std::cin >> b;
	int product = a * b;
	int sum = a + b;
	int dif = a - b;
	int div = a / b;
	std::cout <<"Product: " << product << std::endl;
        std::cout <<"Sum: " << sum << std::endl;
        std::cout <<"Difference: " << dif << std::endl;
        std::cout <<"Divisionm: " << div << std::endl;
	return 0;
}

