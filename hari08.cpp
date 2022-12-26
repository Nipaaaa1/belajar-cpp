#include <iostream>
#include <string>

void counter() {
	static int hitung = 0;
	hitung++;
	std::cout << "Fungsi ini dipanggil sebanyak: " << hitung << " kali." << std::endl;
}

class orang {
	private:
	std::string nama;
	static int jumlah;

	public:
	explicit orang(std::string iNama)
	: nama{iNama} {
		jumlah++;
		std::cout << "Membuat objek " << nama << ". " << jumlah << " objek sudah dibuat." << std::endl;
	}
};

int orang::jumlah = 0;

int main() {
	counter();
	counter();
	orang obj1{"Asep"};
	orang obj2{"Udin"};
}
