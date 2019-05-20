/* 
 * Problem Statement : Write a program to demonstrate Destructor.
 * Program : Destructor
 * Description : Destructor function
 * Interaction : User Input
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
public:
    //constructor

    Abc() {
        cout << "Object created.\n";
    }
    //destructor

    ~Abc() {
        cout << "Object destroyed.\n";
    }

};

int main() {
    Abc a;
    getchar();
}