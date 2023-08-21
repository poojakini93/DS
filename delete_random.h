#include<iostream>
#include "structure.h"
//#include "main.cpp"
using namespace std;

void delete_random()
{
	if(head==NULL)
		cout<<"No data in linked list\n";
	else
	{
		int pos,i;
		node *prev;
		node *next;
		node *temp=head;
		cout<<"Enter position in which node need to be deleted\n";
		cin>>pos;
		for(i=1;i<pos;i++)
		{
			prev=temp;
			temp=temp->link;
			next=temp->link;
		}
		prev->link=next;
		next->link=NULL;
		free(temp);
	}
	cout<<"Deleted successfully\n";
}
