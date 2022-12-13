// Day 3: Rucksack Reorganization

#include <algorithm>
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

int get_priority(char item) {
    if (item >= 'a') {
        return item - 96;
    } else {
        return item - 38;
    }
}

int main() {
    ifstream file("aoc22day3_data.txt");

    int priority_sum_part_1 = 0;
    int priority_sum_part_2 = 0;

    vector<string> last_two;
    for (string line; getline(file, line);) {
        size_t half_len = line.length() / 2;
        string first_half = line.substr(0, half_len);
        string second_half = line.substr(half_len);

        for (char item : first_half) {
            if (second_half.find(item) != string::npos) {
                priority_sum_part_1 += get_priority(item);
                break;
            }
        }

        if (last_two.size() == 2) {
            for (char item = 'A'; item <= 'z'; item += (item == 'Z' ? 7 : 1)) {
                if (
                    line.find(item) != string::npos &&
                    last_two[1].find(item) != string::npos &&
                    last_two[0].find(item) != string::npos
                ) {
                    priority_sum_part_2 += get_priority(item);
                    break;
                }
            }

            last_two.clear();
        } else {
            last_two.push_back(line);
        }
    }

    cout << "[PART 1] Sum of priorities: " << priority_sum_part_1 << "\n";
    cout << "[PART 2] Sum of priorities: " << priority_sum_part_2 << "\n";
}
