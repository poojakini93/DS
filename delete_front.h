#include<iostream>
#include "structure.h"
//#include "main.cpp"
using namespace std;

void delete_front()
{
	if(head==NULL)
		cout<<"No data in linked list\n";
	else
	{
		node *temp=head;
		head=temp->link;
		cout<<"deleted successfully\n";
	}	
}