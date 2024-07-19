//1. WAP to create simple calculator using class.

#include<iostream>
using namespace std;

class calculator
{
	private:
		int choice,x,y;
	public:
		void opration()
		{
			cout<<"\n\n\t 1.Addition";
			cout<<"\n\n\t 2.subtraction";
			cout<<"\n\n\t 3.multiplication";
			cout<<"\n\n\t 4.division";
		}

		void  choice()
		{
			cout<<"\n\n\t select your choice=";
			cin>>choice;
		}
		
		void input()
		{
		cout<<"Enter the num1=";
		cin>>x;
		
		cout<<"\nEnter the num2=";
		cin>>y;		
		}			
		void opration()
		{
			if(choice==1)
				cout<<"addition="<<x+y;
			else if(choice==2)
				cout<<"subtraction"<<x-y;
			else if(choice==3)
				cout<<"multiplication="<<x*y;
			else if(choice==4)
				cout<<"division="<<x/y;
		}
			
	
};
main()
{
	calculator o;
	
	o.print_choice();	
	o.choice();
	o.input();
	o.opration();

}
