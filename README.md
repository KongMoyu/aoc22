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
int x;
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

1.register int x = 0;: this is used to tell the compiler to store a variable in a register instead of in memory. (can potentially make your program run faster, because it is faster to access variables in registers than it is to access them in memory.). However, the compiler may ignore your request and store the variable in memory if it determines that it is better to do so. The register keyword is not commonly used in modern C++ programming.
  
2.void justFunction(void);: This indicates that the function "printHello" does not take any arguments (just an example). An argument can be something like a (int num) for the function to work.
  
3.static int count = 10; or static int add(int a, int b) {return a+b;}: (1)To specify that a variable has static storage duration. This means that the variable is created at the beginning of the program and exists until the end of the program. It is like a global variable, but its visibility is limited to the file it is defined in.(2)To specify that a function or variable has internal linkage. This means that the function or variable is only visible within the file it is defined in and is not visible to other files.

4.extern int variable;// In a header file ... int variable = 10;// In a source file: This declares a variable named "variable" with external linkage. The "extern" keyword specifies that the variable can be accessed from other translation units and the definition of "variable" in the source file specifies the storage location and value of the variable.
  
5.Directory *root = new Directory (Null,"/"); Directory *current_dir = root;: What these two lines mean is that the first line creates a root called 'Directory'(can be use as an object) and NULL indicate that it has no parent(alone). While the "/" string is the name of the root('Directory'). Then the second line means that any changes with current_dir will reflect on root, also, the current_dir object will point to the same new 'Directory'("/") also known as root, while fall under the same Directory TreeNode structure.
  
6.#include <sstream>  std::istringstream stream(line);: Firstly, istream means input stream that allows you to read data from a string object as if it were an input stream. So istringstream stream(line) is a class the has a constructor that takes a string as an argument(line). The string is used to initialize the input stream and the characters in the string can be read from the stream using the >> operator or other stream extraction functions.
  why use istringstream sstream(*input*)?
- When you have a string that contains multiple values and you want to extract those values one by one.
- When you want to read formatted data from a string (e.g., integers, floating-point numbers, etc.).
- When you want to read data from a string that is generated at runtime (e.g., from user input).
- When you want to read data from a string that is stored in a file or received over a network connection.
In the end, the 'stream' word will have the same value as 'line' which is in the bracket
  
Another important thing about istringstream is that, in C++, an istringstream object can be used to read data from a string as if it were an input stream. By default, istringstream treats white space (i.e., spaces, tabs, and newlines) as delimiters and reads data up to the next white space character. This means that, by default, istringstream will read words (i.e., sequences of non-white-space characters) from the input string.
  
But if you want characters also can; use char word; instead of std::string word;
  
7.A tree is a data structure that consists of nodes organized into a hierarchy. Each node in the tree has zero or more child nodes, and each child node has a parent node. The top node in the tree, which has no parent, is called the root node.

A Directory object might be used to represent a directory in a file system, with the name field representing the name of the directory, the parent field pointing to the parent directory, and the child field pointing to a child directory.

A TreeNode object might be used to represent a node in a tree data structure, with the val field representing the value stored at the node, the left field pointing to the left child node, and the right field pointing to the right child node.

Both Directory and TreeNode objects can be used to represent nodes in a tree data structure, but they are not necessarily the same thing. The specific member fields and functionality of a Directory object or a TreeNode object will depend on how they are defined and used in a particular program.

8.member function (under a struct definition): A member function is a function that is defined as part of a struct or class. It has access to the member fields of the struct or class and can be called on objects of the struct or class.
  
9.int get_smallest_sufficient_dir_size(int minimum) {
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
} // The get_smallest_sufficient_dir_size function returns the size of the smallest directory with size greater than or equal to a given minimum size.
           
- The function first calls the get_size function on itself to get the size of the current directory. If the size is less than the minimum size, it sets the size variable to -1.

-Next, the function uses a ranged-based for loop to iterate over the child directories of the current directory. For each child directory, it calls the get_smallest_sufficient_dir_size function recursively to get the size of the smallest sufficient directory within that child directory.

-If the size of the current child directory is smaller than the current value of the size variable, or if the size variable is -1 (indicating that no sufficient directory has been found yet), the size variable is updated to the size of the current child directory.

-Finally, the function returns the value of the size variable, which will be the size of the smallest sufficient directory found within the current directory and its children.

Opposite:
                            
int get_largest_insufficient_dir_size(int minimum) {
    int size = get_size();

    if (size >= minimum) {
        size = -1;
    }

    for (Directory *dir : dirs) {
        int dir_size = dir->get_largest_insufficient_dir_size(minimum);
        if (dir_size > size) {
            size = dir_size;
        }
    }

    return size;
}        
  
In TreeNode: 
                            
int minimum_size = 500;
TreeNode *root = create_tree();  // create the tree
int smallest_sufficient_dir_size = get_smallest_sufficient_dir_size(root, minimum_size);
                            
int get_smallest_sufficient_dir_size(TreeNode *root, int minimum) {
    int size = root->val;  // get the size of the current node

    if (size < minimum) {
        size = -1;
    }

    for (TreeNode *child : root->children) {  // iterate over the children of the current node
        int child_size = get_smallest_sufficient_dir_size(child, minimum);  // recursively check the children
        if ((child_size < size || size == -1) && child_size != -1) {
            size = child_size;
        }
    }

    return size;
}                            
                            
  

> Day 8;

1.vector<vector<int>> map; This means that map is a two-dimensional vector (a vector of vectors) of integers.

int main() {
  vector<vector<int>> map = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  for (int i = 0; i < map.size(); ++i) {
    for (int j = 0; j < map[i].size(); ++j) {
      cout << map[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}

2.
if (!visible_trees_increased && !blocked) {
                    ++visible_trees;
                    visible_trees_increased = true;
                } // ensure that two false is agreed upon different occasions to ensure this only iterate once.

3.size_t &axis = horizontal ? check_x : check_y;: Axis is a reference to a variable that is set to check_x if horizontal is true, and check_y otherwise. if you increase the value of axis, the value of check_x or check_y will also be increased, depending on the value of horizontal. 

for (axis += sign; axis < size; axis += sign) {
  // Loop body
}

As the loop iterates, the value of axis is incremented by sign (axis += sign). Since axis is a reference to either check_x or check_y, the value of check_x or check_y will also be incremented, depending on which one axis is a reference to.





> Day 9;

1.std::pair<int, int>: This allows you to store two items of different types as a single unit. In this case, the two types being stored are int.
  
  std::pair<std::string, int> nameAge;
  nameAge.first = "John";
  nameAge.second = 25;
  std::cout << "Name: " << nameAge.first << ", Age: " << nameAge.second << std::endl;
  
2.std::make_pair: This is a function that creates a new pair containing the two elements passed as arguments. 
  
3.std::set<std::pair<int, int>> tail_positions_part_1; This line of code creates an empty set of unique pairs of integers, where the elements will be stored in sorted order.
  
4.std::set: it stores its elements in a sorted order, and the elements are unique. When you try to insert an element into the set that already exists, it will be ignored because a set only stores unique elements.
  
5.if (std::abs(x_diff) == 2 || std::abs(y_diff) == 2) { // follow the parent 
      knot.first += (x_diff > 0) ? 1 : ((x_diff < 0) ? -1 : 0); // if 2, +1. if -2, -1.
      knot.second += (y_diff > 0) ? 1 : ((y_diff < 0) ? -1 : 0); // if diff = 0, no move
  }
                                                    
6.std::pair<int, int> &knot = knots[i]; // after parent
  std::pair<int, int> &parent = knots[i - 1]; // before knot

  
> Day 10;

1.substr(0, 3): This method is used to extract the first three characters of the first_name.

2.line.substr(5): this is a method used to extract a substring from the line variable, starting from the 5th character

3.std::stod: this is a function used to convert a string to a double-precision floating-point number.(std::stoi is used for converting a string to an integer and std::stod is used for converting a string to a double-precision floating-point number)


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
