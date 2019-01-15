/* 
 * Problem Statement : Input two numbers from user and swap it using call by
 *                     reference.
 * Program : Swapping two numbers
 * Description : Swap two numbers using call  by reference
 * Interaction : User Input
 * Author : J. Mahto (@jvm)
 * Date : January,15th,2019
 * Environment : Netbeans 8.2 C++
 * Copyright : Moral Knowledge Public Sr. Sec. School
 * Note : For use in Turbo C++ 
 *          **line 18 , Put ".h" after iostream
 *          **line 20 , replace the quoted part by <conio.h>
 *          **line 22 , remove this line
 *          **line 27 , int should be replaced by void 
 */

#include<iostream>
#include<stdio.h>
#include "../headers/conio.h"

using namespace std;

//function prototypes
void swap(int &a,int &b);

int main(){
    int a,b;
    cout<<"Enter number A:\t";
    cin>>a;
    cout<<"Enter number B:\t";
    cin>>b;
    swap(a,b);
    cout<<"After swapping :\n";
    cout<<"A = "<<a;
    cout<<"\nB = "<<b;
    getchar();
}


//-------function definition-----

void swap(int &x,int &y){
    int c=x;
    x=y;
    y=c;
}