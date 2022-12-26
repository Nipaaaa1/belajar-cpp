#include <iostream>

void pangkatArray(int *arr, int panjang) {
	for(int i = 0; i < panjang; i++) {
		arr[i] *= arr[i];
	}
}

void printArray(int *arr, int panjang) {
	for(int i = 0; i < panjang; i++){
		if(i == 0) {
			std::cout << "[ " << arr[i];
		} else if(i > 0 && i < panjang) {
			std::cout << ", " << arr[i];
		}
		if(i == (panjang - 1)) {
			std::cout << " ]" << std::endl;
		}		
	}
}

int main() {
	int arr[] = { 1, 2, 3, 4, 5 };
	int panjangArray = sizeof(arr) / sizeof(arr[0]);

	printArray(arr, panjangArray);
	pangkatArray(arr, panjangArray);
	printArray(arr, panjangArray);
}
