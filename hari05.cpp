#include <iostream>
#include <string>
#include <vector>

class orang {
	private:
	std::string nama;
	int umur;
	std::vector<std::string> hobi;

	public:
	orang(std::string iNama, int iUmur, std::vector<std::string> iHobi)
	: nama{iNama}, umur{iUmur}, hobi{iHobi} {}

	std::string ambilNama() { return nama; }
	int ambilUmur() { return umur; }
	std::vector<std::string> ambilHobi() { return hobi; }
	void printData() {
		std::cout << "Nama: " << nama << std::endl;
		std::cout << "Umur: " << umur << std::endl;
		std::cout << "Hobi:" << std::endl;
		for(std::string iniHobi : hobi) {
			std::cout << "- " << iniHobi << std::endl;
		}
		std::cout << std::endl;
	}
	
	orang(orang& rhs)
	: nama{rhs.nama}, umur{rhs.umur}, hobi{rhs.hobi} {
		std::cout << "Copy Constructor sudah digunakan!" << std::endl;
	}

	orang& operator=(orang& rhs) {
		this->nama = rhs.nama;
		this->umur = rhs.umur;
		this->hobi = rhs.hobi;
		std::cout << "Copy Assignment sudah digunakan!" << std::endl;
		return *this;
	}

	orang(orang&& rhs)
	: nama{std::move(rhs.nama)}, umur{std::move(rhs.umur)}, hobi{std::move(rhs.hobi)} {
		std::cout << "Move Constructor sudah digunakan!" << std::endl;
	}

	orang& operator=(orang&& obj) {
		this->nama = std::move(obj.nama);
		this->umur = std::move(obj.umur);
		this->hobi = std::move(obj.hobi);
		std::cout << "Move Assignment sudah digunakan!" << std::endl;
		return *this;
	}

	~orang() {
		std::cout << "Destructor sudah digunakan!" << std::endl;
	}
};

int main() {
	orang udin{"Udin", 21, { "Main Bola", "Ngoding" }};
	udin.printData();

	orang karyawan = udin;
	karyawan.printData();

	orang siswa{"Mamat", 17, { "Badminton", "Sepeda" }};
	siswa.printData();
	siswa = udin;
	siswa.printData();

	orang member = std::move(karyawan);
	member.printData();

	orang ketua{"Adin", 20, { "Ngoding", "Nonton Anime"}};
	ketua.printData();
	ketua = std::move(siswa);
	ketua.printData();
}
