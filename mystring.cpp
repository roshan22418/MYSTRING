#include<iostream>
#include"mystring.h"
#include<cstring> 

using namespace std;


//defination of all declared function i mystring.h
Mystring::Mystring(){
    data = new char[1];
    length1 = 0;
    data[0] ='\0';
}


Mystring::Mystring(const char *src){
    data = new char[strlen(src)+1];
    
    length1 = strlen(src);
    strcpy(data,src);

}

Mystring::Mystring(const Mystring &other){
    data = new char[other.length1 +1];
    length1 = other.length1;
    strcpy(data,other.data);


}

int Mystring::length() const{
    return length1;

}
bool Mystring::isempty()
{
    return length1==0;
}

Mystring::~Mystring(){
    delete[] data;
}

const char *Mystring::c_str() const{
    return data;
}
std::ostream &operator<<{std::ostream &os,const Mystring &str}{
    os<<str.c_str();
    return os.
}
