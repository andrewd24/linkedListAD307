/*-----------------------------------------------------------------------------
Class: IntList

Class that defines a linked list of listNode structs.

Includes an append node fuction to add a number to the list and a fuction to 
print the list as well as a constructor and destructor.
-----------------------------------------------------------------------------*/
#ifndef INTLIST_H
#define INTLIST_H

class intList
{
private:
	
	struct listNode
	{   
		int value;
		
		listNode * link;
	};
	
	listNode * head;
	
	listNode * current;

public:
	
	intList();
	
	void appendNode(int data);
	
	void displayList();
	
	~intList();
};


#endif