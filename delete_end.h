#include<iostream>
#include "structure.h"
//#include "main.cpp"
using namespace std;

void delete_end()
{
	node *prev;
	if(head==NULL)
		cout<<"no data in linked list\n";
	else if(head->link==NULL)
	{
		free(head);
		head=NULL;
	}
	else
	{
		node *temp=head;
		while(temp->link!=NULL)
		{
			prev=temp;
			temp=temp->link;
		}
		free(temp);
		prev->link=NULL;
	}
	cout<<"Deleted successfully\n";
}
