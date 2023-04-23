#include <iostream>
#include <limits.h>
using namespace std;

void printArray(int arr[], int size) {
	
	for(int i=0; i<size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void inc(int arr[], int size) {
	arr[0] = arr[0] + 10;

	printArray(arr, size);
}

bool find(int arr[], int size, int key) {

	//linear search

	for(int i=0; i<size; i++) {
		if(arr[i] == key) 
			return true;
	}

	//not present
	return false;
}
}

