/* 
 * Problem Statement : Write a program on to demonstrate Single Inheritance.
 * Program : Find max. out of two no.(s) using single inheritance.
 * Description : --
 * Interaction : No User Input
 * Author : J. Mahto (@jvm)
 * Date : February,5th,2019
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
class Data{
protected:
    int x,y;
public:
    void getData(int a,int b){
        x=a;
        y=b;
    }
    void showData(){
        cout<<"x="<<x<<endl;
        cout<<"y="<<y<<endl;
    }
};

//another class which inherits "Data" class
class Maximum:public Data{
public:
    void max(){
        if(x>y){
            cout<<"Maximum is "<<x;
        }
        else{
            cout<<"Maximum is :"<<y;
        }
    }
    
};

//program starts here
int main(){
    Maximum m;
    m.getData(5,10);
    m.showData();
    m.max();
    getchar();
}