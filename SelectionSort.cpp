#include <iostream>
#include "SelectionSort.h"
#include <chrono>

int main() {

	auto start = std::chrono::high_resolution_clock::now();

	int arr1[] = { 2, 3, 5, 6, 8, 23, 543, 85643, 12, 312, 5346, 876 };
	double arr2[] = { 1.123214321, 423.3124, 312.432, 12.21, 43215.746, 432543543.3 };

	int size1 = sizeof(arr1) / sizeof(arr1[0]);
	int size2 = sizeof(arr2) / sizeof(arr2[0]);

	SelectionSort(arr1, size1);
	SelectionSort(arr2, size2);

	for (int i = 0; i < size1; i++) {
		std::cout << arr1[i] << " ";
	}
	std::cout << std::endl;

	for (int i = 0; i < size2; i++) {
		std::cout << arr2[i] << " ";
	}
	std::cout << std::endl;

	auto end = std::chrono::high_resolution_clock::now();
	std::chrono::duration<float> duration = end - start;
	
	std::cout << duration.count();

	return 0;
}