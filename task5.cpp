#include <iostream>

int main() {
	int n = 0;
	std::cin >> n;
	int * arr = new int[n];
	for(int i = 0; i < n; ++i) {
		std::cin >> arr[i];
	}
	for(int i = 0; i < n; ++i) {
		std::cout << arr[i] << " ";
	}
	delete[] arr;	
	return 0;
}
