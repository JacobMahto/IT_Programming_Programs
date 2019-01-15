/* 
 * Problem Statement : Write a program to demonstrate Zero Argument 
 *                     Constructor
 * Program : Zero Argument constructor
 * Description : Class initialization with zero argument constructor
 * Interaction : No User Input
 * Author : J. Mahto (@jvm)
 * Date : January,15th,2019
 * Environment : Netbeans 8.2 C++
 * Copyright : Moral Knowledge Public Sr. Sec. School
 * Note : For use in Turbo C++ 
 *          **line 18 , Put ".h" after iostream
 *          **line 20 , replace the quoted part by <conio.h>
 *          **line 22 , remove this line 
 *          **line 39 , int should be replaced by void 
 */

#include<iostream>
#include<stdio.h>
#include "../headers/conio.h"

using namespace std;

//declaration of classes
class Abc{
private:
    int a;
public :
    //zero argument constructor
    Abc(){
        a=0;
    }
    //function to display data member which is initialized
    void show(){
        cout<<"Value of a = "<<a;
    }
};

int main() {
    Abc x;
    x.show();
}