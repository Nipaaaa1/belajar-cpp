#include <iostream>
#include <string>

class kelasKu {
	private:
	std::string nama;
	int umur;

	public:
	kelasKu(std::string iniNama, int iniUmur)
	: nama{iniNama}, umur{iniUmur} {}

	void printData() {
		std::cout << "Nama: " << nama << std::endl;
		std::cout << "Umur: " << umur << std::endl;
	}

	kelasKu(kelasKu& rhs)
	: nama{rhs.nama}, umur{rhs.umur} {
		std::cout << "Copy Constructor telah digunakan!" << std::endl;
	}
};


int main() {
	kelasKu orang1{"Udin", 21};
	orang1.printData();
	kelasKu orang2 = orang1;
	orang2.printData();
}
