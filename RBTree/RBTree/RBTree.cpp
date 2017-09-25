#include <iostream>
#include <stdlib.h>
//#include "stdafx.h" 
#include "node_tree.h"

using namespace std;

void fun1() {
	//int *a;
	//int b = 3;
	//a = &b;
	//int *&c = a;// 指针的引用 
	//cout<<"c="<<*c<<endl; 

	/*
	node* t1 = (node*)malloc(sizeof(node));
	t1->value = 20;
	t1->father = NULL;
	t1->left_child = NULL;
	t1->right_child = NULL;

	node* t2 = (node*)malloc(sizeof(node));
	t2->value = 40;
	t2->father = NULL;
	t2->left_child = NULL;
	t2->right_child = NULL;

	node* r1 = (node*)malloc(sizeof(node));
	r1->value = 200;
	r1->father = NULL;
	r1->left_child = t1;
	r1->right_child = NULL;

	node* r2 = r1->left_child;
	r2 = t2;
	//r1->left_child = t2;

	if(NULL == r1->left_child){
	cout<<"r1-left_child is null"<<endl;
	} else {
	cout<<"r1-left_child isn't null"<<endl;
	cout<<r1->left_child->value<<endl;
	}
	free(t1);
	free(t2);
	free(r1);
	*/

	node<int>* n1 = (node<int>*)malloc(sizeof(node<int>));
	n1->value = 100;
	n1->father = NULL;
	n1->left_child = NULL;
	n1->right_child = NULL;
	node<int>* n2 = (node<int>*)malloc(sizeof(node<int>));
	n2->value = 50;
	n2->father = NULL;
	n2->left_child = NULL;
	n2->right_child = NULL;

	tree<int> t1;
	t1.addNode(n1);
	t1.addNode(n2);
	t1.traversal(t1.getroot());

	free(n1);
	free(n2);
}

int main() {
	//fun1();
	cout << "hello world!" << endl;
	return 0;
}