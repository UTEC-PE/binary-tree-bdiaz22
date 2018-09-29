#ifndef NODE_H
#define NODE_H

struct Node {
	int data;
	Node* left;
	Node* right;

	Node(int data, Node* left, Node* right)
	{
		data = data;
		this->left = left;
		this->right = right;
	}
	
};

#endif