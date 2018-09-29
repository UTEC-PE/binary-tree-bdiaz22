#ifndef ITERATOR_H
#define ITERATOR_H

#include "binarytree.h"

#include <vector>

using namespace std;

class Iterator
{
private:
	vector<Node*> nodes;
	Node* current;
	

public:
	Iterator(Node* node)
	{
		current = leftNodeMinimun(node);
	}

	Node* leftNodeMinimun(Node* node)
	{
		if(node->left == NULL)
			return node;
		else
		{
			nodes.push_back(node);
			return leftNodeMinimun(node);
		}
	}

	Iterator operator ++()
	{
		if(current->left == NULL && current->right == NULL)
			current=nodes.back();

		else if(current == nodes.back())
		{
			if (current->right != NULL)
			{
				current = current->right;
				nodes.pop_back();
				current = leftNodeMinimun(current);
			}
			else
			{
				nodes.pop_back();
				current = nodes.back();
			}
		}

		else
		{
			current = current->right;
			current = leftNodeMinimun(current);
		}
		return *this;
	}

	int operator *()
	{
		return current->data;
	}
};

#endif