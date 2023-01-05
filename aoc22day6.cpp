#include <fstream>
#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

bool compare(const string& str, int start, int i){ 
	for(int j = 0; j < i; j++){
		for(int k = 1; k < (i - j); k++){
			if(str[start + j] == str[start + k + j]){
				return false;
			}
		}
	}
	return true;
}

int find_marker(const string& line, int marker_size, int start = 0){ 
	for(int i = start; i < line.size(); i++){ 
		if(compare(line, i, marker_size)){ 
            return i + marker_size;
		}
	}
	throw runtime_error("No marker found");
}

int solution1(const string& lines){
	int packet_marker = find_marker(lines, 4);
	return packet_marker;
}

int solution2(const string& lines){ 
	int message_marker = find_marker(lines, 14);
	return message_marker;
}

int main(){
	ifstream file("aoc22day6_data.txt");
	int result_1; 
	int result_2;
	for (string line; getline(file, line);) { 
		result_1 = solution1(line);
		result_2 = solution2(line); 
	}
	cout << "Part 1: " << result_1 << '\n';
	cout << "Part 2: " << result_2 << '\n';

	return 0;
}
