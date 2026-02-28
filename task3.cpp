#include <iostream>

int max(int i1, int i2) {
        return (i1 > i2) ? i1 : i2;
}

double max(double d1, double d2) {
        return (d1 > d2) ? d1 : d2;
}
char max(char c1, char c2) {
        return (c1 > c2) ? c1 : c2;
}

int main() {
	int i1 = 0;
	int i2 = 0;
	std::cin >> i1;
	std::cin >> i2;

	double d1 = 0;
	double d2 = 0;
	std::cin >> d1;
	std::cin >> d2;

	char c1 = 0;
	char c2 = 0;
	std::cin >> c1;
	std::cin >> c2;

	std::cout << "Max of integers: " << max(i1, i2) << std::endl;
        std::cout << "Max of doubles: " << max(d1, d2) << std::endl;
        std::cout << "Max of chars: " << max(c1, c2) << std::endl;

	return 0;
}
