// Day 4: Camp Cleanup

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
    ifstream file("aoc22day4_data.txt");

    int containments = 0;
    int overlaps = 0;

    for (string line; getline(file, line);) {
        size_t comma = line.find_first_of(',');
        string group_1 = line.substr(0, comma);
        string group_2 = line.substr(comma + 1);

        size_t dash = group_1.find_first_of('-');
        int group_1_left = stoi(group_1.substr(0, dash));
        int group_1_right = stoi(group_1.substr(dash + 1));

        size_t dash2 = group_2.find_first_of('-');
        int group_2_left = stoi(group_2.substr(0, dash2));
        int group_2_right = stoi(group_2.substr(dash + 1));

        if (
            (group_1_left >= group_2_left && group_1_right <= group_2_right) ||
            (group_2_left >= group_1_left && group_2_right <= group_1_right)
        ) {
            ++containments;
        }

        if (group_1_left <= group_2_right && group_1_right >= group_2_left) {
            ++overlaps;
        }
    }

    cout << "[PART 1] Full containments: " << containments << "\n";
    cout << "[PART 2] Overlaps: " << overlaps << "\n";
}
