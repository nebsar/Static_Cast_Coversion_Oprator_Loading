/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Eagleye
 *
 * Created on September 12, 2018, 11:55 PM
 */

#include <iostream>
#include <string>

class Int {
    int m_x;

public:
    Int(int x = 0) : m_x{x}
    {
        std::cout << "Conversion Constructor : \n";
    }

    operator std::string() { // this is a good example for operator overloading
        std::cout << "Conversion operator : \n";
        return std::to_string(m_x);
    }

};

class Base {
};

class Derived : private Base {
};

int main() {

    Int obj(30);

    std::string str = obj;

    std::string str2 = static_cast<std::string> (obj);

    Int str3 = static_cast<Int> (30);

    Derived d;

    Base* b1 = static_cast<Base*> (&d); // since Base access specifier is private, gives error
    
    int i = 0;
    
    void* v = static_cast<void*>(&i); // static_cast is used to casting from and to void pointer
    
    int* ip = static_cast<int*>(v); // static_cast is used to casting from and to void pointer


    return 0;
}

