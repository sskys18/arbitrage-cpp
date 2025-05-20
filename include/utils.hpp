#ifndef UTILS_HPP
#define UTILS_HPP

#include <vector>
#include <string>
#include <algorithm>
#include <numeric>

namespace utils {

// Calculate the sum of a vector
template<typename T>
T sum(const std::vector<T>& data) {
    return std::accumulate(data.begin(), data.end(), T{});
}

// Calculate the average of a vector
template<typename T>
double average(const std::vector<T>& data) {
    if (data.empty()) return 0.0;
    return static_cast<double>(sum(data)) / data.size();
}

// Find the maximum value in a vector
template<typename T>
T max(const std::vector<T>& data) {
    if (data.empty()) throw std::runtime_error("Cannot find max of empty vector");
    return *std::max_element(data.begin(), data.end());
}

// Find the minimum value in a vector
template<typename T>
T min(const std::vector<T>& data) {
    if (data.empty()) throw std::runtime_error("Cannot find min of empty vector");
    return *std::min_element(data.begin(), data.end());
}

} // namespace utils

#endif // UTILS_HPP 