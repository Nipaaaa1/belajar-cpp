#include <iostream>

void sebuahFungsi(int& nilai1, int& nilai2) {
	try {
		int hasil = nilai1 + nilai2;
		if(hasil > 40) {
			std::cout << "Tidak ada error" << std::endl;
		} else {
			throw hasil;
		}
	}
	catch(const int& err) {
		std::cout << "Error, jumlah nilai1 + nilai2 adalah: " << err << std::endl;
	}
}

int main() {
	int x,y;

	std::cout << "Masukkan nilai1 & nilai2: ";
	std::cin >> x >> y;
	std::cout << std::endl;
	sebuahFungsi(x,y);
}
