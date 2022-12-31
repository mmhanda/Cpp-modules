#include <iostream>
#include <string>
#include <vector>

struct S {
    int value;
    S(int val) 
    {
        value = val;
        std:cout << "default constructor\n";
    }

    S(const S &)
    {

    }

    S(S &&)
    {

    }

    
};

void foo(std::string s)
{

}


void bar1(std::string &s)
{

}

void bar2(std::string *s)
{

}



void fuzz(const std::string s)
{

}

void buzz(const std::string &s)
{

}

void func(int *&ptr) 
{

}

int main() {
    std::string s;

    return 0;
}