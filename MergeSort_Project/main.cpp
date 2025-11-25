#include <iostream>
#include <vector>
#include "MergeSort.h"


int main() {
	std::vector<int> ints = { 5, 2, 9, 1, 5, 6 };
	std::vector<double> doubles = { 3.14, 2.71, -1.0, 0.0, 2.71 };


	std::cout << "Przed sortowaniem (int): ";
	for (auto v : ints) std::cout << v << ' ';
	std::cout << '\n';


	MergeSort<int>::sort(ints);


	std::cout << "Po sortowaniu (int): ";
	for (auto v : ints) std::cout << v << ' ';
	std::cout << "\n\n";


	std::cout << "Przed sortowaniem (double): ";
	for (auto v : doubles) std::cout << v << ' ';
	std::cout << '\n';


	MergeSort<double>::sort(doubles);


	std::cout << "Po sortowaniu (double): ";
	for (auto v : doubles) std::cout << v << ' ';
	std::cout << '\n';


	return 0;
}