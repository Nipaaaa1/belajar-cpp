#include <iostream>
#include <cmath>

class persegiPanjang {
	protected:
	int panjang;
	int lebar;

	public:
	persegiPanjang(int inPanjang, int inLebar) : panjang{inPanjang}, lebar{inLebar} {}

	virtual int luas() { return panjang * lebar; }
	virtual int keliling() { return 2 * (panjang + lebar); }
};

class balok : public persegiPanjang {
	private:
	int tinggi;

	public:
	balok(int inPanjang, int inLebar, int inTinggi) : persegiPanjang::persegiPanjang{inPanjang, inLebar}, tinggi{inTinggi}  {}

	int luas() { return 2 * ((panjang * lebar) + (panjang * tinggi) + (lebar * tinggi)); }
	int keliling() { return panjang * lebar * tinggi; }
};

int main() {
	persegiPanjang persegiPanjang1{10,6};
	std::cout << persegiPanjang1.luas() << ' ' << persegiPanjang1.keliling() << std::endl;

	balok balok1{10,6,4};
	std::cout << balok1.luas() << ' ' << balok1.keliling() << std::endl;
}
