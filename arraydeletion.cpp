#include<iostream>
using namespace std;
int main()
{
	int arr[50],size,i,del,count=0;
	cout<<"enter array size:";
	cin>>size;
	cout<<"enter array elements:";
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter element to be deleted:";
	cin>>del;
	for(i=0;i<size;i++)
	{
	     if (arr[i]==del)
	     {
	     	for(int j=i;j<(size-1);j++)
	     	{
	     		arr[j]=arr[j+1];	
			}
		count++;
		break;
		 }
	}
	
if(count==0)
 {
 	cout<<"elements not found";
 }
else
{
	cout<<"elements deleted \n";
	cout<<"now the new array is: \n";
	for(i=0;i<(size-1);i++)
	{
		cout<<arr[i]<<"  ";
	}
}
	
}
