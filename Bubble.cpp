#include <iostream>
#include "Bubble.h"

int main() {

	unsigned int start_time = clock();

	int array1[] = {1, 2, 4, 5};

	double array2[] = { 1.5, 12.5, 52.7, 12312.4, 434342.1, 2.4, 122.4 };

	int size1 = sizeof(array1) / sizeof(array1[0]);
	int size2 = sizeof(array2) / sizeof(array2[0]);

	BubbleSort(array1, size1);
	BubbleSort(array2, size2);


	for (int i = 0; i < size1; i++) {
		std::cout << array1[i] << " ";
	}

	std::cout << std::endl;

	for (int i = 0; i < size2; i++) {
		std::cout << array2[i] << " ";
	}

	std::cout << std::endl;	

	unsigned int end_time = clock();
	unsigned int search_time = end_time - start_time;

	std::cout << search_time;

	return 0;
}