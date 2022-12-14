#include <fstream>
#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

bool compare(const string& str, int start, int i = 4)
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

int solution(const string& line)
{
	for(int i = 0; i < line.size() - 4; i++)
	{
		if(compare(line, i))
		{
			return i + 4;
		}
	}
	throw runtime_error("No marker found");
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
