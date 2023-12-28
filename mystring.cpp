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

Mystring::Mystring(const Mystring &src){

}

int main(){

}