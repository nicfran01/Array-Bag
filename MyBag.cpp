// Author: Nick Francisco
// Date: 9/5/2024
// Class: CS 3350

#include "MyBag.h"
#include <vector>
using namespace std;

template<class ItemType>
bool MyBag<ItemType> :: removeAll(const ItemType& anEntry)
{
	//Sets boolean that checks whether item has been removed yet
	bool itemRemoved = false;
	//Checks if items need removed
	while (this->contains(anEntry))
	{
		//Removes an item from the bag
		this->remove(anEntry);
		//Sets the boolean to true when at least one item was removed
		itemRemoved = true;
	}
	//Returns false if no items are removed, returns true if at least one item is removed
	return itemRemoved;
}