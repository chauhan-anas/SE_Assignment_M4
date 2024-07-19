//1. Write a program of to swap the two values using template.

#include<iostream>
using namespace std;

template<class j>

void swapp(j x,j y)
{
	j temp=0;
	
	temp=x;
	x=y;
	y=temp;
	
	cout<<"\n\n\t x="<<x;
	cout<<"\n\n\t y="<<y;
}



main()
{
	int x,y;
	
	cout<<"Enter x=";
	cin>>x;
	
	cout<<"Enter y=";
	cin>>y;
	
	swapp(x,y);
	
}
