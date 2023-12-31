#ifndef MYSTRING_H
#define MYSTRING_H

#include<iostream>


class Mystring{
private:
    char *data;
    int length1;
public:
    Mystring();
    Mystring(const char *data);
    Mystring(const Mystring &src);
    ~Mystring();
    int length() const;
    bool isempty();

    friend std::ostream&operator<<(std::ostream &os,const Mystring &str);

};





#endif