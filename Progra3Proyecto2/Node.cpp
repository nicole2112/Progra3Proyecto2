#include "pch.h"

#include "Node.h"

//constructors
Node::Node() : value(0), right(nullptr), down(nullptr)
{	}

Node::Node(int _value, Node* _right, Node* _down) : value(_value), right(_right), down(_down)
{	}

//getters
int Node::getValue() {
	return value;
}

Node* Node::getRight() {
	return right;
}

Node* Node::getDown() {
	return down;
}

//setters
void Node::setValue(int _value) {
	value = _value;
}

void Node::setRight(Node* _right) {
	right = _right;
}

void Node::setDown(Node* _down) {
	down = _down;
}