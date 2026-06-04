#include <iostream>
#include <vector>
#include <algorithm>
#include "ExchangeSorter.h"

void runTest(const std::string& test_name, std::vector<int> numbers) {
	std::cout << "тесты:\n" << test_name << std::endl;

	ExchangeSorter sorter(numbers);

	std::cout << "до:    ";
	sorter.printArray();

	sorter.sort();

	std::cout << "после: ";
	sorter.printArray();

	std::vector<int> sorted_numbers = sorter.getNumbers();
	bool is_correct = std::is_sorted(sorted_numbers.begin(), sorted_numbers.end());
	std::cout << "результат:\n" << (is_correct ? "PASSED" : "FAILED") << std::endl;
}

int main() {
	runTest("случайный пор€док",
		std::vector<int>{64, 25, 12, 22, 11, 90, 3, 47});

	runTest("уже отсортирован",
		std::vector<int>{1, 2, 3, 4, 5, 6, 7, 8});

	runTest("обратный пор€док",
		std::vector<int>{8, 7, 6, 5, 4, 3, 2, 1});

	runTest("одинаковые элементы",
		std::vector<int>{5, 5, 5, 5, 5});

	runTest("один элемент",
		std::vector<int>{42});

	runTest("два элемента - нужен обмен",
		std::vector<int>{9, 1});

	runTest("два элемента Ч обмен не нужен",
		std::vector<int>{1, 9});

	runTest("отрицательные числа",
		std::vector<int>{-3, 7, -1, 0, 5, -8, 4});

	runTest("числа с повторени€ми",
		std::vector<int>{4, 2, 4, 1, 2, 3, 1});

	return 0;
}