// Author: Nick Francisco
// Date: 9/5/2024
// Class: CS 3350

//implement MyBag. h here
#ifndef MY_BAG_
#define MY_BAG_

template<class ItemType>
class MyBag : public ArrayBag<ItemType>
{
public:
	bool removeAll(const ItemType& anEntry);
};

#include "MyBag.cpp"
#endif