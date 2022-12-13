// Day 5: Supply Stacks

#include <algorithm>
#include <fstream>
#include <iostream>
#include <iterator>
#include <stack>
#include <sstream>
#include <utility>
#include <vector>
#include <string>
#include <cctype>
using namespace std;

enum ParsingMode {
    STACKS,
    INSTRUCTIONS
};

int main() {
    ifstream file("aoc22day5_data.txt");

    stack<string> stack_lines;

    vector<stack<char>> stacks_1;
    vector<stack<char>> stacks_2;

    ParsingMode mode = STACKS;
    for (string line; getline(file, line);) {
        switch (mode) {
            case STACKS:
                if (isdigit(line[1])) {
                    line.erase(
                        remove(line.begin(), line.end(), ' '),
                        line.end()
                    );

                    size_t stacks_count = line.size();
                    for (size_t i = 0; i < stacks_count; ++i) {
                        stacks_1.push_back(stack<char>());
                    }

                    while (!stack_lines.empty()) {
                        string stack_line = stack_lines.top();
                        stack_lines.pop();

                        size_t size = stack_line.size();
                        for (size_t i = 0; i < size; ++i) {
                            if (stack_line[i] != ' ' && (i + 3) % 4 == 0) {
                                stacks_1[(i + 3) / 4 - 1].push(stack_line[i]);
                            }
                        }
                    }

                    stacks_2 = stacks_1;
                    mode = INSTRUCTIONS;
                } else {
                    stack_lines.push(line);
                }
            break;

            case INSTRUCTIONS:
                if (line.empty()) {
                    continue;
                }

                line.erase(
                    remove_if(
                        line.begin(),
                        line.end(),
                        static_cast<int (*)(int)>(isalpha)
                    ),
                    line.end()
                );

                istringstream stream(line);
                int parts[3];

                for (size_t i = 0; stream.good(); ++i) {
                    stream >> parts[i];
                }

                stack<char> group;

                for (size_t i = 0; i < parts[0]; ++i) {
                    stacks_1[parts[2] - 1].push(stacks_1[parts[1] - 1].top());
                    stacks_1[parts[1] - 1].pop();

                    group.push(stacks_2[parts[1] - 1].top());
                    stacks_2[parts[1] - 1].pop();
                }

                while (!group.empty()) {
                    stacks_2[parts[2] - 1].push(group.top());
                    group.pop();
                }
            break;
        }
    }

    cout << "[PART 1] Crates on top of each stack: ";

    for (stack<char> &stack : stacks_1) {
        cout << stack.top() << "";
    }

    cout << "\n[PART 2] Crates on top of each stack: ";

    for (stack<char> &stack : stacks_2) {
        cout << stack.top() << "";
    }

    cout << "\n";
}
