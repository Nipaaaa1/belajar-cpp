#include <iostream>
#include <string>

class orang {
	private:
	std::string nama;
	int umur;

	public:
	orang(std::string iNama, int iUmur)
	: nama{iNama}, umur{iUmur} {
		std::cout << "Data orang berhasil masuk!" <<std::endl;
	}
	std::string ambilNama() const {
		return nama;
	}
	int ambilUmur() const {
		return umur;
	}
};

int main() {
	orang orang1{"Devan", 18};

	std::cout << "Nama saya: " << orang1.ambilNama() << std::endl << "Umur saya: " << orang1.ambilUmur() << std::endl;
}
