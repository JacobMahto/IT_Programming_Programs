/* 
 * Problem Statement : Write a program to overload unary minus operator
 *                     using for doing negative on a class object using
 *                     friend function
 * Program : Overloading minus operator using friend function
 * Description : --
 * Interaction : No User Input
 * Author : J. Mahto (@jvm)
 * Date : January,20th,2019
 * Environment : Netbeans 8.2 C++
 * Copyright : Moral Knowledge Public Sr. Sec. School
 * Note : For use in Turbo C++ 
 *          **line 18 , Put ".h" after iostream
 *          **line 20 , replace the quoted part by <conio.h>
 *          **line 22 , remove this line 
 *          **line 48 , int should be replaced by void 
 */
#include<iostream>
#include<stdio.h>
#include "../headers/conio.h"

using namespace std;

//declaration of class

class Sample {
    int x, y;
    int a = 5;
public:

    void getData(int a, int b) {
        x = a;
        y = b;
    }

    void show() {
        cout << "Value of x = " << x << endl;
        cout << "Value of y = " << y << endl;
    }

    //operation overloading(and friend function)
    friend void operator-(Sample &s) {
        s.x = -s.x;
        s.y = -s.y;
    };
};

int main() {
    Sample u;
    u.getData(7, 10);
    cout << "Object u:\n";
    u.show();
    -u;
    cout << "\nObject u(after overloading):\n";
    u.show();
    getchar();
}