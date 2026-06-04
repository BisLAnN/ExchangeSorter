#include "ExchangeSorter.h"
#include <iostream>

ExchangeSorter::ExchangeSorter(const std::vector<int>& numbers, bool show_steps) {
	this->numbers = numbers;
	this->show_steps = show_steps;
}

void ExchangeSorter::printArray(int left_index, int right_index) const {
	for (int i = 0; i < numbers.size(); i++) {
		if (i == left_index || i == right_index)
			std::cout << "[" << numbers[i] << "]";
		else
			std::cout << " " << numbers[i] << " ";
	}
	std::cout << std::endl;
}

void ExchangeSorter::sort() {
	int size = numbers.size();
	int step_number = 0;

	for (int i = 0; i < size - 1; i++) {
		for (int j = i + 1; j < size; j++) {
			step_number++;

			if (show_steps)
				std::cout << "  шаг " << step_number
				<< ": сравниваем [" << i << "]=" << numbers[i]
				<< " и [" << j << "]=" << numbers[j];

			if (numbers[i] > numbers[j]) {
				int temp = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = temp;

				if (show_steps)
					std::cout << "  --> обмен";
			}

			if (show_steps) {
				std::cout << std::endl << "         ";
				printArray(i, j);
			}
		}

		if (show_steps)
			std::cout << "  позиция " << i << " готова: " << numbers[i]
			<< std::endl << std::endl;
	}
}

std::vector<int> ExchangeSorter::getNumbers() const {
	return numbers;
}