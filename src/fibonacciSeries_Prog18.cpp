/* 
 * Problem Statement : Write a program to print Fibonacci Series.
 * Program : Print Fibonacci Series.
 * Description : Fibonacci Series: u[n]=u[n-1]+u[n-2] , u[0]=0 , u[1]=1
 * Interaction : User Input
 * Author : J. Mahto (@jvm)
 * Date : February,06th,2019
 * Environment : Netbeans 8.2 C++
 * Copyright : Moral Knowledge Public Sr. Sec. School
 * Note : For use in Turbo C++ 
 *          **line 18 , Put ".h" after iostream
 *          **line 20 , replace the quoted part by <conio.h>
 *          **line 22 , remove this line 
 *          **line 25 , int should be replaced by void 
 */


#include<iostream>
#include<stdio.h>
#include "../headers/conio.h"

using namespace std;

//program starts here
int main(){
    int a=0,b=1,n,f;
    cout<<"Number of terms in Fibonacci series : "<<endl;
    cin>>n;
    cout<<a<<" , "<<b;
    for(int i=1;i<n-1;i++){
        int c=a+b;
        a=b;
        b=c;
        cout<<","<<c;
    }
    getchar();
}