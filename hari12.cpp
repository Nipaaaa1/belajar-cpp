#include <iostream>
#include <vector>
#include <cmath>

double hitungStandarDeviasi(std::vector<int> &data) {
	double total = 0.0;
	double jumlahData = static_cast<double>(data.size());
	double mean = 0.0;
	for(int i = 0; i < data.size(); i++){
		mean += data[i];
	}
	mean /= jumlahData;
	for(const int& el : data) {
		total += std::pow((el - mean), 2);
	}
	return  std::sqrt(total / (jumlahData-1));;
}

int main() {
	std::vector<int> data;
	int elemen;

	while(std::cin>>elemen) {
		if(elemen == 0) break;
		data.push_back(elemen);
	}

	std::cout << hitungStandarDeviasi(data) << std::endl;
}
