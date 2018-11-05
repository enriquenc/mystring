#include "MyString.hpp"


MyString::MyString(const char *str)
{
    delete[] _str;
    _str = new char[strlen(str) + 1];
    strcpy(_str, str);
}

MyString &MyString::operator=(MyString const & obj)
{
    delete[] _str;
    _str = new char[strlen(obj._str) + 1];
    strcpy(_str, obj._str);
    return *this;
}

MyString &MyString::operator=(const char *str)
{
    delete[] _str;
    _str = new char[strlen(str) + 1];
    strcpy(_str, str);
    return *this;
}

std::ostream &operator<<(std::ostream &o, MyString const &obj)
{
    o << obj._str;
    return o;
}

std::istream &operator>>(std::istream &i, MyString const &obj)
{
    delete[] obj._str;
    i >> obj._str;
    return i;
}