#pragma once

template <typename T> 
void SelectionSort(T arr[], int size) {
	for (int i = 0; i < size; ++i) {
		int idx_small = i;

		for (int j = i + 1; j < size; j++) {
			if (arr[j] < arr[idx_small]) {
				idx_small = j;
			}
		}
		std::swap(arr[i], arr[idx_small]);
	}
}