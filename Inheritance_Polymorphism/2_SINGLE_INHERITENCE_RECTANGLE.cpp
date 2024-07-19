/*2. Write a C++ Program to find Area of Rectangle using 
inheritance*/

#include<iostream>
using namespace std;

class rect_l
{
	protected:
			int l;
			
			public:
					void length()
					{
						cout<<"\n\n\t Enter the length of rect=";
						cin>>l;
					}
};
class rect_w : public rect_l
{
	int w;
	
	public:
			void width()
			{
				cout<<"\n\n\t Enter the widht of rect=";
				cin>>w;
			}
			
			void area()
			{
				int a;
				a=l*w;
				
				cout<<"\n\n\t Area of Rectangle="<<a;
			}
};
main()
{
	rect_w A;
	
	A.length();
	A.width();
	A.area();
}
