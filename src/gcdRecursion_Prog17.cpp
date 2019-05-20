/* 
 * Problem Statement : Write a program to demonstrate GCD of two numbers
 *                     using recursion.
 * Program : Find HCF of two numbers using Recursion.
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
 *          **line 28 , int should be replaced by void 
 */

#include<iostream>
#include<stdio.h>
#include "../headers/conio.h"

using namespace std;

//function prototype
int gcd(int a,int b);

//program starts here
int main(){
    int x,y,hcf;
    cout<<"Enter first number : "<<endl;
    cin>>x;
    cout<<"Enter second number : "<<endl;
    cin>>y;
    hcf=gcd(x,y);
    cout<<"GCD of the given numbers are : "<<hcf<<endl;
    getchar();
}

//function definition
int gcd(int a, int b){
    if(b==0) return a;
    else return gcd(b,a%b);//recursion
}