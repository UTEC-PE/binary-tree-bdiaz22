#include <iostream>
#include "binarytree.h"

using namespace std;

int main()
{
	binarytree bt1;
	bt1.insert(2,bt1.node());
	bt1.insert(4,bt1.node());
	bt1.insert(3,bt1.node());
	bt1.insert(1,bt1.node());
	bt1.PrintInOrder(bt1.node());
	cout<<"\n";
	bt1.PrintPreOrder(bt1.node());
	cout<<"\n";
	bt1.PrintPostOrder(bt1.node());
	cout<<"\n";
	cout<<bt1.getWeightofBinaryTree()<<"\n";
	cout<< bt1.node()->data;
	return 0;	
}
