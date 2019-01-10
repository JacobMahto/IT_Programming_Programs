/* 
 * Program : Function overloading
 * Description : Calculation of area of circle & rectangle using Function overloading
 * Interaction : User Input
 * Author : J. Mahto (@jvm)
 * Date : 
 * Environment : Netbeans 8.2 C++
 * Copyright : Moral Knowledge Public Sr. Sec. School
 * Note : For use in Turbo C++ 
 *          **line 15 , Put ".h" after iostream
 *          **line 17 , enclose conio.h in angle brackets
 *          **line 19 , remove this line 
 */

#include<iostream>
#include<stdio.h>
#include "conio.h"

using namespace std;

//function prototypes
float area(float radius);
float area(float length,float breadth);
int main(){
    int choice;
    float ar,r,l,b;
    cout<<"\nTo calculate area of Circle, press 0";
    cout<<"\nTo calculate area of Rectangle, press 1\n";
    cin>>choice;
    if(choice==0){
        cout<<"Enter radius of circle ->\t";
        cin>>r;
        ar=area(r);
        cout<<"Area of the Circle is :\t"<<ar;
    }
    else if(choice==1){
        cout<<"Enter Length of the rectangle ->\t";
        cin>>l;
        cout<<"Enter Breadth of the rectangle ->\t";
        cin>>b;
        ar=area(l,b);
        cout<<"Area of the Rectangle is :\t"<<ar;
    }
    else{
        cout<<"Invalid Choice.";
    }
    getchar();
}

//-------function definition-----

//overloaded function for circle
float area(float radius){
    float a=3.14*radius*radius;
    return(a);
}

//overloaded function for rectangle
float area(float length,float breadth){
    float a=length*breadth;
    return(a);
}