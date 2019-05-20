/* 
 * Problem Statement : Write a program to demonstrate copy constructor.
 * Program : Copy constructor
 * Description : Copy constructor
 * Interaction : No User Input
 * Author : J. Mahto (@jvm)
 * Date : January,20th,2019
 * Environment : Netbeans 8.2 C++
 * Copyright : Moral Knowledge Public Sr. Sec. School
 * Note : For use in Turbo C++ 
 *          **line 18 , Put ".h" after iostream
 *          **line 20 , replace the quoted part by <conio.h>
 *          **line 22 , remove this line 
 *          **line 41 , int should be replaced by void 
 */


#include<iostream>
#include<stdio.h>
#include "../headers/conio.h"

using namespace std;

//declaration of class

class Abc {
    int a = 5;
public:
    //default constructor
    Abc() {
    };
    
    //parameterized constructor
    Abc(int x) {
        a = x;
    }
    
    //copy constructor
    Abc(Abc &y) {
        a = y.a;
    }

    void display() {
        cout << "Value of a : " << a << endl;
    }


};

int main() {
    Abc u;
    u.display();
    Abc v(10);
    v.display();
    Abc w(v); //calling copy constructor passing v as argument
    w.display();
}