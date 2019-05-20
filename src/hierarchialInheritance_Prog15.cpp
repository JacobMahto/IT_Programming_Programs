/* 
 * Problem Statement : Write a program to demonstrate Hierarchial Inheritance.
 * Program : Find product of two no.(s) using hierarchial inheritance.
 * Description : --
 * Interaction : No User Input
 * Author : J. Mahto (@jvm)
 * Date : February,05th,2019
 * Environment : Netbeans 8.2 C++
 * Copyright : Moral Knowledge Public Sr. Sec. School
 * Note : For use in Turbo C++ 
 *          **line 18 , Put ".h" after iostream
 *          **line 20 , Use string.h instead of cstring
 *          **line 21 , replace the quoted part by <conio.h>
 *          **line 24 , remove this line 
 *          **line 69 , int should be replaced by void 
 */


#include<iostream>
#include<stdio.h>
#include <cstring>
#include "../headers/conio.h"

using namespace std;

//declaration of classes
class Person{
protected:
    char name[20];
    int age;
public:
    void getPerson(const char* n,int a){
        strcpy(name,n);
        age=a;
    }
    void showPerson(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }
};

//Another class which inherits Person class
class Teacher:public Person{
    char post[10];
public:
    void getPost(const char* p){
        strcpy(post,p);
    }
    void showTeacher(){
        showPerson();
        cout<<"Post :"<<post<<endl;
    }
};

//Another class which inherits Person class
class Student:public Person{
    int standard;
public:
    void getStandard(int s){
        standard=s;
    }
    void showStudent(){
        showPerson();
        cout<<"Standard : "<<standard<<endl;
    }
};

//program starts here
int main(){
    Teacher t;
    t.getPerson("Ram",30);
    t.getPost("TGT");
    Student s;
    s.getPerson("Shyam",17);
    s.getStandard(12);
    t.showTeacher();
    cout<<endl;
    s.showStudent();
    getchar();
}

