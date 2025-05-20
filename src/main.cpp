#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "../include/utils.hpp"

int main() {
    std::cout << "Hello, C++ Practice Project!" << std::endl;
    
    // Example of using vector and algorithms
    std::vector<int> numbers = {5, 2, 8, 1, 9, 3};
    std::sort(numbers.begin(), numbers.end());
    
    std::cout << "Sorted numbers: ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    // Using our utility functions
    std::cout << "Sum: " << utils::sum(numbers) << std::endl;
    std::cout << "Average: " << utils::average(numbers) << std::endl;
    std::cout << "Min: " << utils::min(numbers) << std::endl;
    std::cout << "Max: " << utils::max(numbers) << std::endl;
    
    return 0;
} 