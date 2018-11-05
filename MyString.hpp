#ifndef MYSTRING_HPP
#define MYSTRING_HPP
#include <cstring>
#include <iostream>

class MyString
{
private:
    char *_str;
public:
    MyString(void){_str = new char[1];}
    MyString(MyString &obj){*this = obj;}
    MyString(const char *str);
    ~MyString(void){delete[] _str;}

    MyString &operator=(MyString const &obj);
    MyString &operator=(const char *str);
    // MyString &operator+(MyString const &obj);
    // MyString &operator+(char *str);
    // MyString &operator-(MyString const &obj);
    // MyString &operator-(char *str);
    // char &operator[](int i);

    // friend MyString operator+(char *str, MyString const &obj);

    friend std::ostream &operator<<(std::ostream &o, MyString const &obj);
    friend std::istream &operator>>(std::istream &i, MyString const &obj);
};

#endif