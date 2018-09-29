#ifndef BINARYTREE_H
#define BINARYTREE_H

#include "node.h"
#include "iterator.h"

#include <iostream>
using namespace std;

class binarytree
{
private:
	
	int weight_nodes;

public:
	Node* root;
	binarytree(){
		root =  NULL;
		weight_nodes = 0;
	}
	Node* &node()
	{
		return root;
	}
	Iterator begin()
	{
		Iterator start(root);
		return start;
	}


	void insert(int dat,Node* &node)
	{
		if(node == NULL)
		{
			weight_nodes++;
			node = new Node(dat,NULL,NULL);
		}
		else if(dat < node->data)
			insert(dat,node->left);
		else if(dat > node->data)
			insert(dat,node->right);
		else
			cout<<"Data exist in binary tree"<<"\n";
	}
	int getWeightofBinaryTree()
	{
		return weight_nodes;
	}
	
	void PrintInOrder(Node* node)
	{
		if(node == NULL)
			return;
		else
		{
			PrintInOrder(node->left);
			cout << node->data << " ";
			PrintInOrder(node->right); 
		}
	}

	void PrintPreOrder(Node* node)
	{
		if(node == NULL)
			return;
		else
		{
			cout << node->data << " ";
			PrintInOrder(node->left);
			PrintInOrder(node->right); 
		}
	}

	void PrintPostOrder(Node* node){
		if(node == NULL)
			return;
		else
		{
			PrintInOrder(node->left);
			PrintInOrder(node->right); 
			cout << node->data << " ";
		}
	}
	~binarytree(){
	}
	
};
#endif