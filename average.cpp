#include <iostream>
#include <vector>
#include <string>
#include <numeric>
#include <iomanip>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "Please input numbers to find average." << std::endl;
        return 0;
    }

    std::vector<double> numbers;
    for (int i = 1; i < argc; i++) {
        try {
            numbers.push_back(std::stod(argv[i]));
        } catch (const std::invalid_argument& e) {
            std::cout << "Please input valid numbers." << std::endl;
            return 0;
        }
    }

    double sum = std::accumulate(numbers.begin(), numbers.end(), 0.0);
    double average = sum / numbers.size();

    std::cout << "---------------------------------" << std::endl;
    std::cout << "Average of " << numbers.size() << " numbers = " 
              << std::fixed << std::setprecision(0) << average << std::endl;
    std::cout << "---------------------------------" << std::endl;

    return 0;
}

