#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
class Utility {
public:
    static std::vector<int> generateRandomNumbers(int count, int min, int max) {
        std::vector<int> numbers;
        for(int i = 0; i < count; ++i) {
            numbers.push_back(rand() % (max - min + 1) + min);
        }
        return numbers;
    }
    static int sum(const std::vector<int>& numbers) {
        return std::accumulate(numbers.begin(), numbers.end(), 0);
    }
    static double average(const std::vector<int>& numbers) {
        return static_cast<double>(sum(numbers)) / numbers.size();
    }
    static void sortAscending(std::vector<int>& numbers) {
        std::sort(numbers.begin(), numbers.end());
    }
    static void sortDescending(std::vector<int>& numbers) {
        std::sort(numbers.rbegin(), numbers.rend());
    }
};
int main() {
    std::vector<int> randomNumbers = Utility::generateRandomNumbers(10, 1, 100);
    std::cout << "Random Numbers: ";
    for(int num : randomNumbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    std::cout << "Sum: " << Utility::sum(randomNumbers) << std::endl;
    std::cout << "Average: " << Utility::average(randomNumbers) << std::endl;
    Utility::sortAscending(randomNumbers);
    std::cout << "Sorted Ascending: ";
    for(int num : randomNumbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    Utility::sortDescending(randomNumbers);
    std::cout << "Sorted Descending: ";
    for(int num : randomNumbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}
