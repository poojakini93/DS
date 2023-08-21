#include<iostream>
#include "structure.h"
//#include "main.cpp"
using namespace std;
	
void display()
{
	node *temp=head;
	if(head==NULL)
		cout<<"Empty linked list\n";
	else
	{
		while(temp!=NULL)
		{
			cout<<temp->data<<"\t";
			temp=temp->link;
		}
		cout<<endl;
	}
}