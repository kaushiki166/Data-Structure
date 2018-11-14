#include<iostream>
using namespace std;
int main()
{
	int i,a[20],no,pos,size;
	cout<<"enter the size of array:";
	cin>>size;
	cout<<"enter the elements:";
	for(i=0;i<size;i++)
	{
		cin>>a[i];
	}
	
	cout<<"enter elements to be inserted:";
	cin>>no;
	cout<<"enter the position";
	cin>>pos;
	for(i=0;i>=pos;i--)
	{
		a[i+1]=a[i];
	}
	a[pos]=no;
	cout<<"array after inserting element:";
	for(i=0;i<size;i++)
	{
		cout<<a[i];
	}
	return 0;
}
