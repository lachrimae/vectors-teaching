#pragma once
#include <vector>
#include <iostream>
template <typename T>
void print_container(const std::vector<T>& c) {
	std::cout << "{ ";
	for (auto& i : c) {
		std::cout << i << " ";
	}
	std::cout << "}" << std::endl;
}