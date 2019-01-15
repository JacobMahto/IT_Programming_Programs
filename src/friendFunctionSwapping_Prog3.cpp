/* 
 * Problem Statement : Write a program to swap data member of two classes using 
 *                     friend function
 * Program : Swapping using Friend function
 * Description : Swapping of data member using friend function
 * Interaction : No User Input
 * Author : J. Mahto (@jvm)
 * Date : January,15th,2019
 * Environment : Netbeans 8.2 C++
 * Copyright : Moral Knowledge Public Sr. Sec. School
 * Note : For use in Turbo C++ 
 *          **line 18 , Put ".h" after iostream
 *          **line 20 , replace the quoted part by <conio.h>
 *          **line 22 , remove this line 
 *          **line 50 , int should be replaced by void 
 */

#include<iostream>
#include<stdio.h>
#include "../headers/conio.h"

using namespace std;

//declaration of classes
class First;
class Second;

class First {
    int x;
public:

    void setValue(int a) {
        x = a;
        cout << "Class First x = " << x;
    }
    friend void swap(First a, Second b);
};

class Second {
    int y;
public:

    void setValue(int b) {
        y = b;
        cout << "\nClass Second y = " << y;
    }
    friend void swap(First a, Second b);
};

int main() {
    First a;
    a.setValue(10);
    Second b;
    b.setValue(20);
    swap(a, b);
    getchar();
}

//-------function definition-----

//definition of friend function

void swap(First f, Second s) {
    int c;
    c = f.x;
    f.x = s.y;
    s.y = c;
    cout << "\nAfter swapping ,\nClass First x = " << f.x << "\nClass Second y = " << s.y;
}