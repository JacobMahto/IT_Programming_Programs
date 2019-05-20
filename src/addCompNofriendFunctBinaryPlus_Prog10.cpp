/* 
 * Problem Statement : Write a program to add two complex numbers using
 *                     friend function and Binary Plus(+) operation.
 * Program : Add Complex no.s using friend function & Binary Plus.
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
 *          **line 47 , int should be replaced by void 
 */

#include<iostream>
#include<stdio.h>
#include "../headers/conio.h"

using namespace std;

//declaration of class
class Complex{
    float real;
    float image;
public:
    void input(float x,float y){
        real=x;
        image=y;
    }
    
    //operator overloading (and friend function)
    friend Complex operator+(Complex a,Complex b){
        Complex c;
        c.real=a.real+b.real;
        c.image=a.image+b.image;
        return c;
    }
    
    void show(){
        cout<<real<<" + i"<<image<<endl;
    }
};

int main(){
    Complex u,v,w;
    u.input(1.5,2.5);
    v.input(3.6,4.8);
    //adding two complex numbers to third complex number
    w=u+v;
    cout<<"u = ";
    u.show();
    cout<<"v = ";
    v.show();
    cout<<"w = ";
    w.show();
    getchar();
}