/* 
 * Problem Statement : Write a program to demonstrate constructor
 *                     overloading
 * Program : Constructor Overloading
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
 *          **line 51 , int should be replaced by void 
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
    Abc(){
        a=b=c=0;
    }
    
    //one argument constructor
    Abc(int x) {
        a=b=c=x;
    }
    
    //Two argument constructor
    Abc(int x, int y) {
        a = x;
        b = y;
        c = x+y;
    }
    
    //function to display class member variables
    void show() {
        cout << "Values of a = " << a << ",b= " << b << ",c= " << c << "\n";
    }
};

int main() {
    Abc t; //passing no parameter to constructor
    cout<<"Zero Argument Constructor : ";
    t.show();
    Abc u(15); //passing 1 parameter to constructor
    cout<<"One Argument Constructor : ";
    u.show();
    Abc v(15, 25); //passing 2 parameters to constructor
    cout<<"Two Argument Constructor : ";
    v.show();
    getchar();
}