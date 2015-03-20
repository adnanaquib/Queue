#include "queue.h"
# include <cstdlib>


Queue::Queue(int qs) : qsize(qs)
{
	front = rear = NULL;
	items = 0;
}

Queue::~Queue()
{
	Node * temp;
	while (front != NULL)
	{
		temp = front;
		front = front->next;
		delete temp;
	}
}