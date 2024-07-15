#pragma once

#include <queue>
#include "LinkedList.h"

template <class T>
class ITree
{
public:
	virtual	std::queue<LinkedList<T>*> getLevel(int height) = 0;
};
