#include<iostream>
#include "structure.h"
//#include "main.cpp"
using namespace std;

void insert_front()
{
	if(head==NULL)
		head=create();
	else
	{
		node *temp=create();
		temp->link=head;
		head=temp;
	}
}

