#include<iostream>
#include "structure.h"
//#include "main.cpp"
using namespace std;

void insert_random()
{
	if(head==NULL)
		cout<<"No data in linked list\n";
	else
	{
		int pos,i;
		node *temp1=create();
		node *temp2=head;
		cout<<"Enter position where data need to be inserted\n";
		cin>>pos;
		for(i=1;i<pos-1;i++)
		{
			temp2=temp2->link;
			if(temp2==NULL)
				cout<<"Cannot insert data\n";
		}
		temp1->link=temp2->link;
		temp2->link=temp1;
	}
}