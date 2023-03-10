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
        int getUmur() { return umur; }
	virtual void printData() {
		std::cout << "Print Data Orang" << "\n";
		std::cout << "Nama: " << nama << "\n";
                std::cout << "Umur: " << umur << "\n";
	}
};

class siswa : public orang {
        private:                                                        int nik;                                                        int semester;

        public:
        siswa(std::string iNama, int iUmur, int iNik, int iSemester) : orang::orang{iNama, iUmur}, nik{iNik}, semester{iSemester} {}

        int getNik() { return nik; }
        int getSemester() { return semester; }
        void printData() {
		std::cout << "Print Data Siswa" << "\n";
                std::cout << "Nama Siswa: " << nama << "\n";
                std::cout << "Umur Siswa: " << umur << "\n";
                std::cout << "Nomor NIK: " << nik << "\n";
                std::cout << "Semester: " << semester << "\n";
        }
};

int main() {
	orang udin{"Udin", 17};
	udin.printData();
        siswa asep{"Asep", 18, 77012, 5};
        asep.printData();
}
