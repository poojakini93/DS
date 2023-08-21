#ifndef STRUCTURE_H
#define STRUCTURE_H
#include<iostream>
using namespace std;

typedef struct Node
{
	int data;
	struct Node *link;
}node;

 node *head=NULL;
node* create()
{
    Node *extra = new Node;

	cout<<"Enter data\n";
	cin>>extra->data;

	extra->link=NULL;
	return extra;
}

#endif