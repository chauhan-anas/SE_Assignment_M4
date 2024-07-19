//2. Write a program of to sort the array using templates.

#include<iostream>
using namespace std;

template<class j>

void sortt(j x[])
{
	j temp;
	for(j i=0;i<5;i++)
	{
		for(j k=i+1;k<5;k++)
		{
			if(x[i]>x[k])
			{
				temp=x[i];
				x[i]=x[k];
				x[k]=temp;
			}
		}
	}
	for(j y=0;y<5;y++)
	{
	cout<<"\n\n\t sorted Array"<<y+1<<"="<<x[y];
	}
}
main()
{
	int arr[5];
	for(int i=0;i<5;i++)
	{
	cout<<"\n\n\t Enter number"<<i+1<<"=";
	cin>>arr[i];
	}
	sortt(arr);
}
