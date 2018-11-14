#include<iostream>
using namespace std;
int main()
{
	int item,choice,i;
	int queue[100];
	int rear=0;
	int front=0;
	int exit=1;
	
	cout<<"\n Simple Queue Program";
	do{
		cout<<"\n Queue main menu";
		cout<<"\n 1.Insert \n 2.Remove \n 3.Display \n other to exit";
		cout<<"\n enter your choice:";
		cin>>choice;
		switch(choice){
			case 1:
				if(rear==100)
				   cout<<"\n Queue reached maximum!!";
			    else{
			    	cout<<"\n enter the value to be insert:";
			    	cin>>item;
			    	cout<<"\n Position:"<<rear+1<<"insert value:"<<item;
			    	queue[rear++]=item;
				}
				break;
			case 2:
			    if(front==rear)
				   cout<<"\n Queue is empty";
				else{
					cout<<"\n Position:"<<front<<"Remove value:"<<queue[front];
					front++;
				}	
				break;
			case 3:
				cout<<"\n Queue size:"<<(rear-front);
				for(i=front;i<rear;i++)
				cout<<"\n Position:"<<i<<"value:"<<queue[i];
				break;
			default:
				exit=0;
				break;
			}
	} while(exit);
	
	return 0;
}
