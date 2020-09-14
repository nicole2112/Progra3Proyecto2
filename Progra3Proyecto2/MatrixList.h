#pragma once

#ifndef MATRIX_LIST_H
#define MATRIX_LIST_H

#include "Node.h"
#include <iostream>
#include <string>

class MatrixList {
private:
	Node* head;
	int m, n; //dimensions of matrix
	int counterM = 0, counterN = 0;

	bool isEmpty();

	double squareDeterminant(Node*, Node*);
	double squareDeterminant2(Node*, Node*, int, int);

	double squareDeterminantLaplaceRec(Node*, int);
	double squareDeterminantLaplace(Node*, int, int);

public:
	//constructor
	MatrixList();
	MatrixList(int, int);

	//getters y setters
	Node* getHead();
	int getM();
	int getN();
	void setM(int);
	void setN(int);

	//functions
	void addElement(int);
	void printMatrix();

	int findValue(int, int);

	//operaciones aritmeticas
	MatrixList addition(Node*, Node*, int, int, int, int);
	MatrixList subtraction(Node*, Node*, int, int, int, int);
	MatrixList multiplication(Node*, Node*, int, int, int, int);
	double determinant(Node*, int, int);

	static MatrixList loadFile(const char*);
	static bool createFile(Node*, const char*);
};

#endif // !MATRIX_LIST_H