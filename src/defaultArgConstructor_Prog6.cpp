/* 
 * Problem Statement : Write a program to demonstrate default Arguments 
 *                     Constructor
 * Program : Defaults Arguments constructor
 * Description : Class initialization with multiple argument constructor
 * Interaction : No User Input
 * Author : J. Mahto (@jvm)
 * Date : January,20th,2019
 * Environment : Netbeans 8.2 C++
 * Copyright : Moral Knowledge Public Sr. Sec. School
 * Note : For use in Turbo C++ 
 *          **line 18 , Put ".h" after iostream
 *          **line 20 , replace the quoted part by <conio.h>
 *          **line 22 , remove this line 
 *          **line 44 , int should be replaced by void 
 */

#include<iostream>
#include<stdio.h>
#include "../headers/conio.h"

using namespace std;

//declaration of class
class Abc {
private:
    int a, b, c;
public:
    //Three argument constructor
    Abc(int x = 10, int y = 20, int z = 30) {
        a = x;
        b = y;
        c = z;
    }
    //function to display data member which is initialized

    void show() {
        cout << "Values of a = " << a << ",b= " << b << ",c= " << c << "\n";
    }
};

int main() {
    Abc t; //passing no parameter to constructor
    t.show();
    Abc u(15); //passing 1 parameter to constructor
    u.show();
    Abc v(15, 25); //passing 2 parameters to constructor
    v.show();
    Abc w(15, 25, 35); //passing 3 parameters to constructor
    w.show();
    getchar();
}