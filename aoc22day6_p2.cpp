#include <fstream>
#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

bool compare(const string& str, int start, int i)
{
	for(int j = 0; j < i; j++)
	{
		for(int k = 1; k < (i - j); k++)
		{
			if(str[start + j] == str[start + k + j])
			{
				return false;
			}
		}
	}
	return true;
}

int find_marker(const string& line, int marker_size, int start = 0)
{
	for(int i = start; i < line.size() - marker_size; i++)
	{
		if(compare(line, i, marker_size))
		{
			return i + marker_size;
		}
	}
	throw runtime_error("No marker found");
}

int solution(const string& line)
{
	int packet_marker = find_marker(line, 4);

	return find_marker(line, 14, packet_marker - 1);
}

int main()
{
	ifstream input("aoc22day6_data.txt");
	string line;
	getline(input, line);
	input.close();
	int result = solution(line);

	cout << "Result: " << result << '\n';

	return 0;
}
