/*2. Write a program of Addition, Subtraction, Division, 
Multiplication using constructor.*/

#include<iostream>
using namespace std;

class calc
{
	int x,y;
	
	public:
		calc()
		{
			cout<<"Enter the Numbers=";
			cin>>x>>y;		
		}	
		int Addition()
		{
			return x+y;	
		}
		int Subtraction()
		{
			return x-y;
		}
		int Multiplication()
		{
			return x*y;
		}
		int Devision()
		{
			return x/y;
		}
};
main()
{
	calc A;
	
	int ans=A.Addition();
	cout<<"\n\n\t Addition="<<ans;
	
	ans=A.Subtraction();
	cout<<"\n\n\t Subtraction="<<ans;
	
	ans=A.Multiplication();
	cout<<"\n\n\t Multiplication="<<ans;
	
	ans=A.Devision();
	cout<<"\n\n\t Devision="<<ans;
}
