// Day 7: No Space Left On Device

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

struct File {
    string name;
    int size;

    File(string name_, int size_) {
        name = name_;
        size = size_;
    }
};

struct Directory {
    Directory *parent;

    string name;
    vector<Directory *> dirs = {};
    vector<File> files = {};

    Directory(Directory *parent_, string name_) {
        parent = parent_;
        name = name_;
    }

    int get_size() {
        int size = 0;

        for (Directory *dir : dirs) {
            size += dir->get_size();
        }

        for (File &file : files) {
            size += file.size;
        }

        return size;
    }

    int get_small_dirs_size() {
        int size = 0;

        for (Directory *dir : dirs) {
            size += dir->get_small_dirs_size();

            int dir_size = dir->get_size();
            if (dir_size <= 100000) {
                size += dir_size;
            }
        }

        return size;
    }

    int get_smallest_sufficient_dir_size(int minimum) {
        int size = get_size();

        if (size < minimum) {
            size = -1;
        }

        for (Directory *dir : dirs) {
            int dir_size = dir->get_smallest_sufficient_dir_size(minimum);
            if ((dir_size < size || size == -1) && dir_size != -1) {
                size = dir_size;
            }
        }

        return size;
    }
};

void delete_dir(Directory *dir) {
    for (Directory *child_dir : dir->dirs) {
        delete_dir(child_dir);
    }

    delete dir;
}

int main() {
    ifstream file("aoc22day7_data.txt");

    Directory *root = new Directory(NULL, "/");
    Directory *current_dir = root;

    for (string line; getline(file, line);) {
        vector<string> tokens;

        istringstream stream(line);
        for (string word; stream >> word; tokens.push_back(word)) {}

        if (tokens[0] == "$" && tokens[1] == "cd") {
            if (tokens[2] == "..") {
                current_dir = current_dir->parent;
            } else {
                for (Directory *dir : current_dir->dirs) {
                    if (dir->name == tokens[2]) {
                        current_dir = dir;
                        break;
                    }
                }
            }
        } else if (tokens[0] == "dir") {
            current_dir->dirs.push_back(new Directory(current_dir, tokens[1]));
        } else {
            try {
                current_dir->files.push_back(
                    File(tokens[1], stoi(tokens[0]))
                );
            } catch (invalid_argument) {
                continue;
            }
        }
    }

    cout << "[PART 1] Total size of small directories: "
              << root->get_small_dirs_size()
              << "\n";

    cout << "[PART 2] Size of smallest sufficient directory: "
              << root->get_smallest_sufficient_dir_size(
                     30000000 - (70000000 - root->get_size())
                 )
              << "\n";

    delete_dir(root);
}
