#include "insertion.h"
#include "bubble.h"

using namespace std;

int main() {
	int array[] = { 5,4,3,2,1 };
	//Insertion::insertionSort(array, 5);
	Bubble::printArray(array, 5);
	Bubble::bubbleSort(array, 5);
	Bubble::printArray(array, 5);
	system("PAUSE");
	return 0;
}

