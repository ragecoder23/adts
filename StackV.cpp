#include "StackV.h"

void Stack::push(int x)
{
	data.push_back(x);
}

void Stack::pop()
{
	data.pop_back();
}

void clear()
{
	for (int i = 0; i < data.size();i++)
	{
		data.pop_back();
	}
	
}

int size()
{
	return data.size();
}

int top();
{
	return data.size()-1;
}
