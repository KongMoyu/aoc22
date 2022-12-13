#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ifstream file("aoc22day1_data.txt");

    vector<int> calorie_counts;

    int current_calories = 0;
    for (string line; getline(file, line);) {
        if (line.empty()) {
            calorie_counts.push_back(current_calories);
            current_calories = 0;
        } else {
            current_calories += stoi(line);
        }
    }

    int first = 0;
    int second = 0;
    int third = 0;

    for (int calories : calorie_counts) {
        if (calories > first) {
            third = second;
            second = first;
            first = calories;
        } else if (calories > second) {
            third = second;
            second = calories;
        } else if (calories > third) {
            third = calories;
        }
    }

    cout << "[PART 1] Largest amount of Calories: " << first << "\n";
    cout << "[PART 2] Sum of top 3: " << first + second + third << "\n";
}
