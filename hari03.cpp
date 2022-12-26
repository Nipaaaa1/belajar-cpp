#include <iostream>
#include <string>

template<typename T>
int panjangArray(T& arr) {
	return sizeof(arr) / sizeof(arr[0]);
}

template<typename T>
void printArray(T& arr, int& panjang) {
	int i = 1;
	std::cout << "[ " << arr[0];
	while(i < panjang) {
		std::cout << ", " << arr[i];
		i++;
	}
	std::cout << " ]" << std::endl;
}

int main() {
	int arr1[] = { 28, 38, 53, 99, 64, 43, 86 };
	std::string arr2[] = { "Udin", "Jamal", "Asep", "Hendra", "Agung", "Wahyu" };
	int panjangArr1 = panjangArray(arr1);
	int panjangArr2 = panjangArray(arr2);

	printArray(arr1, panjangArr1);
	printArray(arr2, panjangArr2);

	int* pointerArr1 = &arr1[0];
	*(pointerArr1 + 3) = 10;
	printArray(arr1, panjangArr1);

	std::string* pointerArr2 = &arr2[0];
	*(pointerArr2 + 2) = "Rehan";
	printArray(arr2, panjangArr2);
}
