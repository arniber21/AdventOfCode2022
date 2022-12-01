#include <iostream>
#include <vector>

int main()
{
    // Get input
    int valueToRead;
    int totalCalories{0};
    int cnt{0};

    std::vector<int> calories{};
    for (int i{0}; i < 2000; i++)
    {
        cnt++;
        totalCalories = 0;
        while (true)
        {
            std::cin >> valueToRead;
            totalCalories += valueToRead;
            char c1 = std::cin.get();
            char c2 = std::cin.peek();
            if (c2 == '\n' || std::cin.eof())
            {
                break;
            }
        }
        calories.push_back(totalCalories);
    }

    // Find the first max
    int totalMax{0};
    int max{INT32_MIN};
    int maxIndex{0};
    for (int i = 0; i < calories.size(); i++)
    {
        if (calories[i] > max)
        {
            max = calories[i];
            maxIndex = i;
        }
    }
    totalMax += max;
    calories.erase(calories.begin() + maxIndex);

    // Delete it and do it agin
    max = INT32_MIN;
    maxIndex = 0;
    for (int i = 0; i < calories.size(); i++)
    {
        if (calories[i] > max)
        {
            max = calories[i];
            maxIndex = i;
        }
    }
    totalMax += max;
    calories.erase(calories.begin() + maxIndex);

    max = INT32_MIN;
    maxIndex = 0;
    for (int i = 0; i < calories.size(); i++)
    {
        if (calories[i] > max)
        {
            max = calories[i];
            maxIndex = i;
        }
    }
    totalMax += max;
    calories.erase(calories.begin() + maxIndex);

    // Give out the max
    std::cout << "MAX VALUE OF TOP 3: [" << totalMax << "]\n";
}