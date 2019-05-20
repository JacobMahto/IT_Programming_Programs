/* 
 * Problem Statement : Write a program on to demonstrate Multiple Inheritance.
 * Program : Find sum of two no.(s) using multiple inheritance.
 * Description : --
 * Interaction : No User Input
 * Author : J. Mahto (@jvm)
 * Date : February,05th,2019
 * Environment : Netbeans 8.2 C++
 * Copyright : Moral Knowledge Public Sr. Sec. School
 * Note : For use in Turbo C++ 
 *          **line 18 , Put ".h" after iostream
 *          **line 20 , replace the quoted part by <conio.h>
 *          **line 22 , remove this line 
 *          **line 64 , int should be replaced by void 
 */


#include<iostream>
#include<stdio.h>
#include "../headers/conio.h"

using namespace std;

//declaration of classes
class Data1{
protected:
    int x;
public:
    void getX(int a){
        x=a;
    }
    void showX(){
        cout<<"x = "<<x<<endl;
    }
};

//another class which inherits "Data1" class
class Data2:public Data1{
protected:
    int y;
public:
    void getY(int b){
        y=b;
    }
    void showY(){
        cout<<"y = "<<y<<endl; 
    }
    
};

//Another class which inherits Data2 class(which already inherits Data1 class)
class Addition:public Data2{
    int z;
public:
    void sum(){
        z=x+y;
    }
    void showZ(){
        cout<<"Z = "<<z<<endl;
    }
};

//program starts here
int main(){
    Addition a;
    a.getX(5);
    a.getY(10);
    a.sum();
    a.showX();
    a.showY();
    a.showZ();
}