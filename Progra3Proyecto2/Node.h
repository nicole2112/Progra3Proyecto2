#pragma once

#ifndef NODE_H
#define NODE_H

class Node {
private:
	int value; //value of node
	Node* right; //points to Node at right side
	Node* down; //points to Node that's down

public:
	//constructors
	Node();
	Node(int, Node*, Node*);

	//getters and setters
	int getValue();
	Node* getRight();
	Node* getDown();

	void setValue(int);
	void setRight(Node*);
	void setDown(Node*);
};

#endif // !NODE_H