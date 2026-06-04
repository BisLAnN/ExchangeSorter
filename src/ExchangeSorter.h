#pragma once
#include <vector>
#include <string>

class ExchangeSorter {
private:
	std::vector<int> numbers;
	bool show_steps;

public:
	ExchangeSorter(const std::vector<int>& numbers, bool show_steps = false);

	void sort();
	void printArray(int left_index = -1, int right_index = -1) const;

	std::vector<int> getNumbers() const;
};