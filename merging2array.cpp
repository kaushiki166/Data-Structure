#include<iostream>
using namespace std;
int main()
{
	int arr1[50],arr2[50],size1,size2,size,i,j,k,merge[100];
	cout<<"enter array 1 elements:";
	for(i=0;i<size1;i++);
	{
		cin>>arr1[i];
	}
	cout<<"enter array 2 size:";
	cin>>size2;
	cout<<"enter array 2 elements:";
	for(i=0;i<size2;i++)
	{
		cin>>arr2[i];
	}
for(i=0;i<size1;i++)
{
	merge[i]=arr1[i];
}
size=size1+size2;
for(i=0,k=size1;k<size,i<size2;i++,k++)
{
	merge[k]=arr2[i];
}
cout<<"now the new array after merging is: \n";
for(i=0;i<size;i++)
{
	cout<<merge[i]<<"  ";
}
}
