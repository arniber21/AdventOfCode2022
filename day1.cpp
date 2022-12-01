#include <iostream>
#include <vector>

int main() {
    // Get input
    int valueToRead;
    int totalCalories { 0 };
    int cnt { 0 };


    std::vector<int> calories {};
    for(int i = 0; i < 2000; i++) {
        cnt++;
        totalCalories = 0;
        while(true) {
            std::cin >> valueToRead;
            totalCalories += valueToRead;
            char c1 = std::cin.get();
            char c2 = std::cin.peek();
            if(c2 == '\n' || std::cin.eof()) {
                break;    
            }
        }
        calories.push_back(totalCalories);
    }

    // Find the max
    int max = INT32_MIN;
    for(int i = 0; i < calories.size(); i++) {
        if(calories[i] > max) {
            max = calories[i];
        }
    }

    // Give out the max
    std::cout << "MAX VALUE: [" << max << "]\n";
}