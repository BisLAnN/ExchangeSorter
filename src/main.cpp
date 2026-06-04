#include <iostream>
#include <vector>
#include "ExchangeSorter.h"

int main() {
	std::vector<int> demo_array = { 5, 3, 8, 1, 9, 2 };

	ExchangeSorter demo_sorter(demo_array, true);

	std::cout << "исходный массив: ";
	demo_sorter.printArray();
	std::cout << std::endl;

	demo_sorter.sort();

	std::cout << "\nрезультат: ";
	demo_sorter.printArray();
	std::cout << std::endl;

	return 0;
}