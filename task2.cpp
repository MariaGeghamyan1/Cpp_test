#include <iostream>
void swap(int & a, int & b) {
	int tmp = a;
	a = b;
	b = tmp;
	return;
}
void swap(int * a, int * b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
	return;
}

int main() {
	int a = 0;
	std::cin >> a;
	int b = 0;
	std::cin >> b;

	swap(a, b);
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;

	swap(&b, &a);
        std::cout << "a = " << a << std::endl;
        std::cout << "b = " << b << std::endl;

	return 0;
}

