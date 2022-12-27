#include <iostream>
#include <memory>

class testing {
	public:
	void testPrint() {
		std::cout << "Halo dari dalam Class!" << std::endl;
	}
};

int main() {
	std::unique_ptr<testing> point = std::make_unique<testing>();
	point->testPrint();
}
