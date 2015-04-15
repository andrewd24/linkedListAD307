#include<iostream>
#include<cstdlib>
#include"intList.h"

using namespace std;
/*-----------------------------------------------------------------------------
Function:     Constructor

Arguments:    None

Builds an instance of the intList class and initializes the head and current 
nodes to NULL
-----------------------------------------------------------------------------*/
intList::intList()
{   
	head = NULL;
	
	current = NULL;
}

/*-----------------------------------------------------------------------------
Function:     AppendNode

Inputs:       int data

Creates a new listNode of the intList class, defaults the link pointer to NULL.

Traverses to the end of the list and appends the node if head is pointing to a 
node, else it sets head to the new node.
-----------------------------------------------------------------------------*/
void intList::appendNode(int data)
{   
	listNode * n = new listNode;
	
	n->link = NULL;
	
	n->value = data;

	if (head != NULL)
	{
		current = head;
		
		while (current->link != NULL)
		{
			current = current->link;
		}
	
		current->link = n;
	}
	else
	{
		head = n;
	}
}
/*-----------------------------------------------------------------------------
Function:     DisplayList

Inputs:       None

Loops through the linked list and prints them out unsorted.  If the list is 
empty it reports that and stops.
-----------------------------------------------------------------------------*/
void intList::displayList()
{
	if (head == NULL)
	{
		cout << "The list is empty" << endl;
	}
	else
	{

		current = head;

		int i = 1;
		while (current != NULL)
		{
			cout << "Element " << i << " " << current->value << endl;

			current = current->link;
		
			i++;
		}
	}
}
/*-----------------------------------------------------------------------------
Function:     ~Destructor

Loops through the linked list and deletes the nodes.
-----------------------------------------------------------------------------*/
intList::~intList()
{
		while (current != NULL)
		{
            listNode * temporary = new listNode;
		
			temporary = current;
			
			current = current->link;
		
			delete temporary;
		}
	    
		delete current;

		delete head;
		
		cout << "The list has been deleted" << endl;
}