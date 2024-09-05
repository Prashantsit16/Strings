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
![Screenshot 2024-09-05 150430](https://github.com/user-attachments/assets/33458a71-0167-4dd1-b4b3-d37e0045a02c)


String concatenation
![Screenshot 2024-09-05 150332](https://github.com/user-attachments/assets/e348bdb4-7616-4b8e-bf4c-7c6f1e9ee4ba)


String reverse
![Screenshot 2024-09-05 150635](https://github.com/user-attachments/assets/0e55b7a4-2151-4505-a178-4d14f7cb8744)


String palindrome
![Screenshot 2024-09-05 150548](https://github.com/user-attachments/assets/1c6f4ee4-c47e-47af-a9ae-ad74f64be78c)


Occurence of letter in string
![Screenshot 2024-09-05 150635](https://github.com/user-attachments/assets/d6682c4d-2c8a-40e7-a81b-4a0013b763db)


Conclusion :
We learnt about strings and it's implementation in C++ programming.
