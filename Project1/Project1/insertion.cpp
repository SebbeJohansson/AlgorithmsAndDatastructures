#include "insertion.h"

void Insertion::insertionSort(int arr[], int size) {
	int picked;
	std::cout << "Sorting array: \n";
	for (int i = 0; i < size; i++)
	{
		picked = i;
		while (picked > 0 && arr[picked - 1] > arr[picked])
		{
			int tmp = arr[picked];
			arr[picked] = arr[picked - 1];
			arr[picked - 1] = tmp;
			picked--;
		}
		printArray(arr, size);
	}
}

void Insertion::printArray(int arr[], int size) {
	std::cout << "Array: ";
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i];
	}
	std::cout << "\n";
}
