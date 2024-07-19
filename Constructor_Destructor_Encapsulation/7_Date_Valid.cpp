/*7. Write a C++ program to implement a class called Date that
has private member variables for day, month, and year. Include
member functions to set and get these variables, as well as to
validate if the date is valid.*/

#include<iostream>
using namespace std;

class Date
{
	int Day,Month,Year;
		int temp;
	
	public:
			void get_value()
			{
				cout<<"\n\n\t Enter the days=";
				cin>>Day;
				
				cout<<"\n\n\t Enter the Month=";
				cin>>Month;
				
				cout<<"\n\n\t Enter the year=";
				cin>>Year;
			}
			void cheack_valid()
			{
					 temp=0;
				if(Day>=1 && Day<=31)
				{
					if(Month>=1 && Month<=12)
					{
						temp++;	
					}
				}
				
			}
				
			void print_Date()
			{
				if(temp==1)
					cout<<"\n\n\t Date "<<Day<<"-"<<Month<<"-"<<Year<<" is valid..";	
				else
					cout<<"\n\n\t Date "<<Day<<"-"<<Month<<"-"<<Year<<" is not valid..";
			}				
			
};
main()
{
	Date d;
	d.get_value();
	d.cheack_valid();
	d.print_Date();
} 
