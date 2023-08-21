#include<iostream>
#include "structure.h"
#include "delete_end.h"
#include "delete_front.h"
#include "delete_random.h"
#include "insert_random.h"
#include "insert_end.h"
#include "insert_front.h"
#include "display.h"

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


node *create();
void insert_front();
void insert_end();
void delete_front();
void delete_end();
void insert_random();
void delete_random();
void display();




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
		node *temp;
		temp=head;
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

int main()
{	
	int a;
	cout<<"Enter your choice\n";
	while(1)
	{
		cout<<"1. Insert at the front\n";
		cout<<"2. Insert at the end\n";
		cout<<"3. Delete at the front\n";
		cout<<"4. Delete at the end\n";
		cout<<"5. Insert at the random position\n";
		cout<<"6. Delete at the random position\n";
		cout<<"7. Display\n";
		cout<<"8. Exit\n";

		cin>>a;	//between 1 to 7
		switch(a)
		{
			case 1:	insert_front();
					break;
			case 2: insert_end();
					break;
			case 3: delete_front();
					break;
			case 4: delete_end();
					break;
			case 5: insert_random();
					break;
			case 6: delete_random();
					break;
			case 7: display();
					break;
			case 8: exit(0);
					break;
			default: cout<<"Enter valid number\n";
		}
	}
}
