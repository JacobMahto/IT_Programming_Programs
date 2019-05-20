/* 
 * Problem Statement : Write a program to sort given numbers using Selection
 *                     sort.
 * Program : Selection sort
 * Description : --
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
	int size, arr[50], i, j, temp;
	cout<<"Enter Array Size : ";
	cin>>size;
	cout<<"Enter Array Elements : ";
	for(i=0; i<size; i++)
	{
		cin>>arr[i];
	}
	cout<<"Sorting array using selection sort...\n";
	for(i=0; i<size; i++)
	{
		for(j=i+1; j<size; j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	cout<<"Now the Array after sorting is :\n";
	for(i=0; i<size; i++)
	{
		cout<<arr[i]<<" ";
	}
	getchar();
}