#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>

int main() {
    std::string s;
    std::getline(std::cin, s);
    
    // Check if the input contains any '+' characters
    if (s.find('+') == std::string::npos) {
        // If no '+' is found, directly output the input
        std::cout << s << std::endl;
        return 0;
    }
    
    std::vector<int> numbers;
    std::stringstream ss(s);
    std::string item;
    
    // Extract numbers from the input string
    while (std::getline(ss, item, '+')) {
        numbers.push_back(std::stoi(item));
    }
    
    // Sort the numbers in non-decreasing order
    std::sort(numbers.begin(), numbers.end());
    
    // Create the result string
    std::string result;
    for (size_t i = 0; i < numbers.size(); ++i) {
        if (i != 0) {
            result += '+';
        }
        result += std::to_string(numbers[i]);
    }
    
    // Output the result
    std::cout << result << std::endl;
    
    return 0;
}
