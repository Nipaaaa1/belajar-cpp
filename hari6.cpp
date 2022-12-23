#include <iostream>
#include <string>

class orang {
	protected:
	std::string nama;
	int umur;

	public:
	orang(std::string iNama, int iUmur)
	: nama{iNama}, umur{iUmur} {}

	std::string getNama() { return nama; }
	int getUmuc() { return umur; }
};

class siswa : public orang {
	private:
	int nik;
	int semester;

	public:
	siswa(std::string iNama, int iUmur, int iNik, int iSemester) : orang::orang{iNama, iUmur}, nik{iNik}, semester{iSemester} {}

	int getNik() { return nik; }
	int getSemester() { return semester; }
	void printSiswa() {
		std::cout << "Nama Siswa: " << nama << "\n";
		std::cout << "Umur Siswa: " << umur << "\n";
		std::cout << "Nomor NIK: " << nik << "\n";
		std::cout << "Semester: " << semester << "\n";
	}
};

int main() {
	siswa asep{"Asep", 18, 77012, 5};
	asep.printSiswa();
}
