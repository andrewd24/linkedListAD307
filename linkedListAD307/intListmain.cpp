/*-----------------------------------------------------------------------------
Programmer:  Andrew Douglas

Program:     Prompts the user for a list of integers ending in -99.  When -99
			 is entered, the integers are appended into a linked list.

Class:       CSC 307 - Data Structures Using C++

Instructor:  Tom Rishel

Files Included:  intList.h, inListImp.cpp
-----------------------------------------------------------------------------*/
#include<cstdlib>
#include<iostream>
#include"intList.h"

using namespace std;

int main()
{   
	intList List;
	
    int nvData = 0;
	
	cout << "Please enter a list of integers ending with -99. " << endl;
	
	cin >> nvData;

	
    while (nvData != -99)
	{   
		List.appendNode(nvData);
		
		cin >> nvData;
	}
	
	List.displayList();
	
	cin.get();
	cin.get();
	return 0;
}