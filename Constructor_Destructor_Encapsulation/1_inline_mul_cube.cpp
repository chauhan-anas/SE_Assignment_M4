/*1. Write a program to find the multiplication values and the cubic values 
using inline function*/

#include<iostream>
using namespace std;

class pinline
{
	int n;
	
	public:
		void get_num(int j)
		{
			n=j;
		}
		
		 inline int multiplication_num()
		 {
		 	return n*n;
		 }
		 inline int cubic_value_num()
		 {
		 	return n*n*n;
		 }
};
main()
{
	pinline V;
		int a,b;
		cout<<"\n\nEnter the Number1=";
	 	cin>>a;
	
	
	V.get_num(a);
	int s=V.multiplication_num();
	cout<<"\n\n\tMultiplication="<<s;
	int m=V.cubic_value_num();
	cout<<"\n\n\tcubic value="<<m;
}
