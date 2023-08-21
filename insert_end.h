#include<iostream>
#include "structure.h"
//#include "main.cpp"
using namespace std;

void insert_end()
{
	if(head==NULL)
		head=create();
	else
	{
		node *temp=create();
		node *cur=head;
		while(cur->link!=NULL)
		{
			cur=cur->link;
		}
		cur->link=temp;
	}
}