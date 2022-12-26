#include <iostream>
#include <string>

enum class tipeGadget {
	handphone,
	tablet,
	laptop,
	komputer
};

class orang {
	private:
	std::string nama;
	tipeGadget gadget;

	public:
	orang(std::string iNama, tipeGadget iGadget)
	: nama{iNama}, gadget{iGadget} {}

	void printData() {
		std::cout << "Nama: " << nama << std::endl;
		std::cout << "Gadget: ";
		switch(gadget) {
			case tipeGadget::handphone:
				std::cout << "Handphone" << std::endl;
			break;
			case tipeGadget::tablet:
                                std::cout << "Tablet" << std::endl;
                        break;
			case tipeGadget::laptop:
                                std::cout << "Laptop" << std::endl;
                        break;
			case tipeGadget::komputer:
                                std::cout << "Komputer" << std::endl;
                        break;
		}
	}
};

int main() {
	tipeGadget gadget = tipeGadget::handphone;
	orang Udin{"Udin", gadget};
	Udin.printData();
}
