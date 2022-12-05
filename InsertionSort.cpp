#include <iostream>
#include "InsertionSort.h"
#include <ctime>

int main() {
	unsigned int start_time = clock();

	int arr1[] = { 1, 4, 6, 7, 523, 6342, 12, 524, 7674, 987 };
	double arr2[] = { 12.4325, 132321.32, 2313.653, 65.7, 543.11 };

	int size1 = sizeof(arr1) / sizeof(arr1[0]);
	int size2 = sizeof(arr2) / sizeof(arr2[0]);

	InsertionSort(arr1, size1);
	InsertionSort(arr2, size2);

	for (int i = 0; i < size1; i++) {
		std::cout << arr1[i] << " ";
	}

	std::cout << std::endl;

	for (int i = 0; i < size2; i++) {
		std::cout << arr2[i] << " ";

	}

	std::cout << std::endl;

	unsigned int end_time = clock();
	unsigned int search_time = end_time - start_time;

	std::cout << search_time;

	return 0;
}