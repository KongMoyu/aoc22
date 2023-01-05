Hi there! I am Mr.Kong.

This is my file for the Advent Of Code {year => 2022}

I feel very lucky participating in this event and learn with the pros and solve challenging coding questions.

I saved most of my files on VScode with detail explainations comments.

I recommand reading this page with raw format.

###Lesson Learnt###  


> Day 1:

1.Changing my VScode Code Runner's '.json' terminal to "cpp": "cd $dir && g++  -std=c++11 $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt"
  - #include <vector>

2.Learn #include <vector> array : 
  - vector <string> v ;
  - v.push_back("");
  - v.pop_back();
  - v.insert(v. begin() + 1, "");
  - v.erase("");
  - i < v.size();
  - for (int num : v ){} 
  
3.for (string line; getline(file, line);){
    if (line.empty()){
      ...
    }
    else{
      ...
    }
  }
  
4.int key;
  cout << "Enter ...: " << endl;
  cin >> key;
  
5.The basic_string::c_str() is a builtin function in C++ which returns a pointer to an array that contains a null-terminated sequence of characters representing the current value of the basic_string object.
  
6.#include <cstdlib> :The C++ <cstdlib> header file declares a set of general-purpose functions such as: atof() to convert string to double. It also contains a few mathematical functions. For example, abs() to find the absolute value of a number.
  - current += std::atoi(line.c_str()); // atoi is a predefined function from the cstdlib header file used to convert a string value to an integer value.

7. '\t' is used to push text in a line back by 1 tab, used for alinement of text in the terminal.
   
   
> Day 2:

1.if(1 == 2 || 4){
cout<<"True";
}else{
cout<<"False";
}
//True

2.char...: using '' for letter or number(max127) or \n;\t;\\

3.#include <cctype>
  - isalpha(v)
  - islower(v)
  - isdigit(v)
  - tolower(v)
 
4.&& stands for 'and', || stands for 'or'

5.Better than if else statement:One restriction on this expression is that it must evaluate to an integral type (int, char, short, long, long long, or enum)
  - int x;
    cin >> x; // 3
    switch(x){
      case 1;
        cout<< ... << endl;
      break;
      case 2;
        cout<< ... << endl;
      break;
      case 3; // out-put
        cout<< ... << endl;
      break;
      default;
        cout<< ... << endl;
      break;


> Day 3:

1.size_t: is unsigned integral datatype. It represents the size of any object in bytes and returned by sizeof operator. It is used for array **indexing** and counting. It can never be negative.

2.line.substr(start, number): it “extracts” a string from within a string (a part)

3.string.find(item), item can be "" or '',if not found, return -1, find first appearance: It will return the index of the first character of the substring we have to find within the string.


> Day 4:

1.line.find_first_of(','): find the comma, str comma!

2.line.substr(comma + 1): select the sub-string followed by the given character, comma.

3.#include <iostream>
  using namespace std;
  int main() {
    int i = 0;
      cout << ++i << endl; // return 1
    int m = 0;
      cout << m++ << endl; // return 0
  }


> Day 5;

1.enum：
It is used to assign names to the integral constants which makes a program easy to read and maintain. The keyword “enum” is used to declare an enumeration. The following is the syntax of enums. enum enum_name{const1, const2, ....... };
“There's a couple advantages to it, database size and performance — if you index integers you'll be better off than if you index strings.” Because enums are stored in databases as integers rather than as strings, developers also pointed out that they take up less space.

2.Stacks are a type of container adaptors with LIFO(Last In First Out) type of working, where a new element is added at one end (top) and an element is removed from that end only. #include <stack>

3.isdigit: In each iteration of the loop, we use the isdigit() function to check if the string element str[i] is a digit or not. The result is stored in the check variable. check = isdigit(str[i]); If check returns a non-zero value, we print the string element.

4.vector<stack<char>> stacks_1: stacks_1[0],first stack. stacks_1[1],second stack.

5.remove_if(): is a function that removes elements from a range that satisfy a certain condition. In this case, the function removes all elements that are alphabetical characters. The function is called with the following arguments:

6.static_cast<int(*)(int)>(isalpha): A function that returns true if the character passed to it is an alphabetical character (upper or lower case) and false otherwise. The function isalpha is used to determine whether a character is alphabetical.(static_cast is used to convert the function pointer and used to ensure that the types match.)

7.int parts[3];: Declares an array called 'parts' with 3 elements of type 'int'.

8.The stream.good(): loop condition ensures that the loop continues as long as there are elements to be read from the 'stream' object.


> Day 6;

1.compare(const string& str, int start, int i)->function: it compares each character in the marker to every other character in the marker to ensure that all characters in the marker are unique. 

2.const&: it specifies a reference, const& means that the reference is a read-only reference to an object. This can be useful when you want to pass an object to a function, but you don't want the function to modify the original object. e.g void printNumber(const int& number){}

3.find_marker(const string& line, int marker_size, int start = 0)->function: it searches for a marker of a given size starting at a given position (0) in the string.

4.throw runtime_error("No marker found");:this line is being used to signal that a marker was not found in the string being searched. This exception will be caught and handled by the calling function.


> Day 7;

1.


> Day 8;

1.


> Day 9;

1.


> Day 10;

1.


> Day 11;

1.


> Day 12;

1.


> Day 13;

1.


> Day 14;

1.


> Day 15;

1.


> Day 16;

1.


> Day 17;

1.


> Day 18;

1.


> Day 19;

1.


> Day 20;

1.


> Day 21;

1.


> Day 22;

1.


> Day 23;

1.


> Day 24;

1.


> Day 25;

1.


                                                          - END -
