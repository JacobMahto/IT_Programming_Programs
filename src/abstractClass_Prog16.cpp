/* 
 * Problem Statement : Write a program to demonstrate Abstract class.
 * Program : Find area of a triangle and a rectangle using abstract class.
 * Description : --
 * Interaction : No User Input
 * Author : J. Mahto (@jvm)
 * Date : February,06th,2019
 * Environment : Netbeans 8.2 C++
 * Copyright : Moral Knowledge Public Sr. Sec. School
 * Note : For use in Turbo C++ 
 *          **line 18 , Put ".h" after iostream
 *          **line 20 , replace the quoted part by <conio.h>
 *          **line 22 , remove this line 
 *          **line 53 , int should be replaced by void 
 */


#include<iostream>
#include<stdio.h>
#include "../headers/conio.h"

using namespace std;

//declaration of classes
//abstract class below
class Shape{
protected:
    int width;
    int height;
public:
    virtual int area()=0;//pure virtual function
    void getData(int w,int h){
        width=w;
        height=h;
    };
};

class Rectangle:public Shape{
public:
    int area(){
        return(width*height);
    }
};

class Triangle:public Shape{
public:
    int area(){
        return((width*height)/2);
    }
};

//program starts here
int main(){
    Rectangle rect;
    Triangle tri;
    rect.getData(5,7);
    cout<<"Area of Rectangle : "<<rect.area()<<endl;
    tri.getData(6,8);
    cout<<"Area of Triangle :"<<tri.area()<<endl;
    getchar();
}