# Strings

Aim:
To study strings and it's implementation in C++.

Theory:
String is a sequence of characters used to represent text.. C++ supports two types of strings:

C-Style Strings: Arrays of characters ending with a null character (\0). example: char str[] = "Hello, World!";
std::string: A more versatile and safer string class provided by the C++ Standard Library. example: string str = "Hello, World!";
Various operations in string:
Concatenation: Combining two strings into one. C-Style: strcat(dest, src); std::string: str1 + str2;
2.Comparison: Checking if two strings are equal. C-Style: strcmp(str1, str2); std::string: str1 == str2;

3.Length: Finding the number of characters in a string. C-Style: strlen(str); std::string: str.length();

4.Accessing Characters: Individual characters in a string can be accessed using array indexing. C-Style: str[0]; std::string: str.at(0); or str[0];

5.Substrings: Extracting a portion of a string. std::string: str.substr(startIndex, length);

Palindrome string :
A string which is equivalent on both the sides. Example: Madam,civic etc.

Output:
String Input

String concatenation

String reverse

String palindrome

Occurence of letter in string

Conclusion :
We learnt about strings and it's implementation in C++ programming.
