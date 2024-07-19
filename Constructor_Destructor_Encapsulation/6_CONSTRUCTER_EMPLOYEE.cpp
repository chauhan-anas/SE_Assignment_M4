/*6. Write a C++ program to implement a class called Employee 
that has private member variables for name, employee ID, and 
salary. Include member functions to calculate and set salary 
based on employee performance. Using of constructor.*/ 

#include<iostream>
using namespace std;

class Employee
{
	int em_ID,em_salary;
	string em_name;	
	
	public:
			Employee(int id,int salary,string name)
			{
				em_ID=id;
				em_salary=salary;
				em_name=name;
				
			}
			void calculate_salary()
			{
				int R;
				cout<<"\n\n\t Enter performance rating(out of 5)=";
				cin>>R;
				
				if(R>=4)
				{
					int j;
					j=em_salary*0.1;	//10%
					em_salary=em_salary+j;
				}
				
				else if(R==3)
				{
				
					int j;
					j=em_salary*0.08;//8%
					em_salary=em_salary+j;	
				}
				
				
				else if(R==2)
				{
				
					int j;
					j=em_salary*0.05;//5%
					em_salary=em_salary+j;	
				}
				
				else if(R==1)
				{
				
					int j;
					j=em_salary*0.03;//3%
					em_salary=em_salary+j;	
				}
			}
			void set_salry()
			{
				cout<<"\n\n\t your salary After performance="<<em_salary;
			}
			
};
main()
{

	int id,salary;
	string name;
	

	
	cout<<"\n\n\t Enter the id=";
	cin>>id;
	
	cout<<"\n\n\t Enter the salary=";
	cin>>salary;
	
	cout<<"\n\n\t Enter the name=";
	cin>>name;
	
	

	
	Employee em(id,salary,name);
	em.calculate_salary();
	em.set_salry();
}
