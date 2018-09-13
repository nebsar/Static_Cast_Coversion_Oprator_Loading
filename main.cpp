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

    operator std::string() {  // this is a good example for operator overloading
        std::cout << "Conversion operator : \n";
        return std::to_string(m_x);
    }

};

int main() {

    Int obj(30);

    std::string str = obj;

    std::string str2 = static_cast<std::string> (obj);

    Int str3 = static_cast<Int> (30);



    return 0;
}

