#pragma once

template <typename T>
void InsertionSort(T arr[], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = i; j > 0 && arr[j - 1] > arr[j]; j--) {
			std::swap(arr[j - 1], arr[j]);
		}
	}
}