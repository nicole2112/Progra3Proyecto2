#include "pch.h"

#include "MatrixList.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <stdexcept>

using namespace std;

MatrixList::MatrixList() : head(nullptr), m(0), n(0)
{   }

MatrixList::MatrixList(int _m, int _n) : head(nullptr), m(_m), n(_n)
{	}

Node* MatrixList::getHead() {
    return head;
}

int MatrixList::getM() {
    return m;
}

int MatrixList::getN() {
    return n;
}

void MatrixList::setM(int _m) {
    this->m = _m;
}

void MatrixList::setN(int _n) {
    this->n = _n;
}

bool MatrixList::isEmpty() {
    return head == nullptr;
}

MatrixList MatrixList::loadFile(const char* pathname) {

    ifstream matrixIn(pathname, ios::in); //ubicación del archivo, entrada de datos

    MatrixList A(0, 0);

    if (!matrixIn) { //si no se encontró el archivo
        cout << "Archivo " << pathname << " no se ha encontrado" << endl;
        return  A;
    }

    vector <int> values; //para almacenar todos los valores del archivo
    int _m = 0, _n = 0, _n2 = 0; //variables para las dimensiones de la matriz

    string line;
    while (getline(matrixIn, line)) { //recorrer todo el archivo
        _n = 0;

        int lengthNum = 0;
        string numS = "";

        for (int i = 0; i < line.size(); i++) { //recorrer cada elemento por fila
            try {
                if (line.at(i) == ' ') { //Cuando se encuentre un espacio se consideran elementos aparte
                    while (lengthNum > 0) {
                        numS = numS + line.at(i - lengthNum);
                        lengthNum--;
                    }
                    _n++;
                    values.push_back(stoi(numS, nullptr, 10));
                    numS = "";
                }
                else if (i == line.size() - 1) { //Cuando se llegue al final de la fila
                    lengthNum++;
                    while (lengthNum > 0) {
                        numS = numS + line.at((i + 1) - lengthNum);
                        lengthNum--;
                    }
                    _n++;
                    values.push_back(stoi(numS, nullptr, 10));
                }
                else //ir aumentando la longitud de cada elemento
                    lengthNum++;
            }
            catch (const std::invalid_argument& ia) {
                cout << "Error en archivo: " << ia.what() << '\n';
                return A;
            }
        }

        if (_m == 0) //cuando se esté en la primera fila, se almacena la primera longitud
            _n2 = _n;

        if (_n2 != _n) { //cuando la cantidad de elementos en cada fila no sea la misma para toda la matriz
            cout << "Matriz no es valida" << endl;
            return A;
        }

        _m++; //actualiza número de filas
    }

    A.setM(_m); //se settean los valores de la columnas y filas 
    A.setN(_n);
    cout << "Filas: " << _m << " Columnas: " << _n << endl;

    for (int i = 0; i < values.size(); i++) { // guardar elementos en matriz
        A.addElement(values.at(i));
    }

    matrixIn.close();

    return A;
}

bool MatrixList::createFile(Node* _head, const char* pathname) {

    ofstream matrixOut(pathname, ios::trunc); //ubicación del archivo, ios::trunc elimina datos previos en el archivo, si es que hay

    if (!matrixOut) {
        cout << "Error al abrir archivo " << pathname << endl;
        return false;
    }

    // pointer to move right 
    Node* rightPtr;

    // pointer to move down 
    Node* downPtr = _head;

    // loop till node->down is not NULL 
    while (downPtr != nullptr) {
        rightPtr = downPtr;

        // loop till node->right is not NULL 
        while (rightPtr != nullptr) {
            matrixOut << rightPtr->getValue() << " ";
            rightPtr = rightPtr->getRight();
        }
        matrixOut << "\n";
        downPtr = downPtr->getDown();
    }

    matrixOut.close();
    return true;
}

void MatrixList::addElement(int _value) {
    Node* newNode = new Node(_value, nullptr, nullptr);

    if (isEmpty()) { //when the list is empty
        head = newNode;
        counterN++;
        return;
    }

    Node* actual = head;
    Node* previo = actual->getRight();

    if (counterN == 0 && counterM > 0) {
        while (actual->getDown() != nullptr) {
            actual = actual->getDown();
        }
        actual->setDown(newNode);
        counterN++;
        return;
    }

    //Ubicar los apuntadores de previo y actual donde deben
    int i = counterM;
    while (i > 0) { //settear valores previo y actuales acorde a la fila
        if (i == 1)
            previo = actual->getRight();
        actual = actual->getDown();
        i--;
    }

    while (actual->getRight() != nullptr) { //llenar las columnas de fila indicada
        if (counterM > 0)
            previo = previo->getRight();

        actual = actual->getRight();
    }

    if (counterM > 0) //Add new node
        previo->setDown(newNode);
    actual->setRight(newNode);

    counterN++;

    if (counterN == n) { //Reset values when reaching limit
        counterM++;
        counterN = 0;
    }

}

void MatrixList::printMatrix() {
    // pointer to move right 
    Node* rightPtr;

    // pointer to move down 
    Node* downPtr = head;

    // loop till node->down is not NULL 
    while (downPtr != nullptr) {
        rightPtr = downPtr;

        // loop till node->right is not NULL 
        while (rightPtr != nullptr) {
            cout << rightPtr->getValue() << " ";
            rightPtr = rightPtr->getRight();
        }
        cout << "\n";
        downPtr = downPtr->getDown();
    }

    cout << "\n";
}

int MatrixList::findValue(int posX, int posY) {
    // pointer to move right 
    Node* rightPtr;

    // pointer to move down 
    Node* downPtr = head;

    int x = 0, y;

    // loop till node->down is not NULL 
    while (downPtr != nullptr) {
        rightPtr = downPtr;
        y = 0;
        // loop till node->right is not NULL 
        while (rightPtr != nullptr) {
            if (x == posX && y == posY) {
                return rightPtr->getValue(); //retorna el valor en la posición adecuada
            }
            y++;
            rightPtr = rightPtr->getRight();
        }
        x++;
        downPtr = downPtr->getDown();
    }

    return -1;
}

MatrixList MatrixList::addition(Node* headA, Node* headB, int m_A, int n_A, int m_B, int n_B) {

    MatrixList result(0, 0);

    if (m_A != m_B || n_A != n_B) { //validate that they have the same dimension
        cout << "Dimensiones no son validas" << endl;
        return result;
    }

    result.setM(m_A);
    result.setN(n_A);

    Node* rightPtrA, * rightPtrB; //pointer to move down
    Node* downPtrA = headA, * downPtrB = headB; //pointer to move down
    int i = 0, j;

    while (downPtrA != nullptr && downPtrB != nullptr) { //loop for moving down
        rightPtrA = downPtrA;
        rightPtrB = downPtrB;
        j = 0;

        while (rightPtrA != nullptr && rightPtrB != nullptr) { //loop for moving right
            result.addElement(rightPtrA->getValue() + rightPtrB->getValue()); //setting values of new matrix
            rightPtrA = rightPtrA->getRight();
            rightPtrB = rightPtrB->getRight();
            j++;
        }

        downPtrA = downPtrA->getDown();
        downPtrB = downPtrB->getDown();
        i++;
    }

    return result;
}


MatrixList MatrixList::subtraction(Node* headA, Node* headB, int m_A, int n_A, int m_B, int n_B) {
    MatrixList result(0, 0);

    if (m_A != m_B || n_A != n_B) { //validate that they have the same dimension
        cout << "Dimensiones no son validas" << endl;
        return result;
    }

    result.setM(m_A);
    result.setN(n_A);

    Node* rightPtrA, * rightPtrB; //pointer to move down
    Node* downPtrA = headA, * downPtrB = headB; //pointer to move down
    int i = 0, j;

    while (downPtrA != nullptr && downPtrB != nullptr) { //loop for moving down
        rightPtrA = downPtrA;
        rightPtrB = downPtrB;
        j = 0;

        while (rightPtrA != nullptr && rightPtrB != nullptr) { //loop for moving right
            result.addElement(rightPtrA->getValue() - rightPtrB->getValue());
            rightPtrA = rightPtrA->getRight();
            rightPtrB = rightPtrB->getRight();
            j++;
        }

        downPtrA = downPtrA->getDown();
        downPtrB = downPtrB->getDown();
        i++;
    }

    return result;
}

MatrixList MatrixList::multiplication(Node* headA, Node* headB, int m_A, int n_A, int m_B, int n_B) {
    MatrixList result(0, 0);

    if (m_A != n_B || n_A != m_B) { //validate that they have the same dimension
        cout << "Dimensiones no son validas" << endl;
        return result;
    }

    result.setM(m_A);
    result.setN(n_B);

    Node* rightPtrA, * rightPtrB = headB; //pointer to move down
    Node* downPtrA = headA, * downPtrB; //pointer to move down
    int i = 0, j;
    int resultPos;

    while (downPtrA != nullptr) { //loop 1 for moving down in A
        rightPtrA = downPtrA;

        rightPtrB = headB;
        j = 0;

        while (rightPtrB != nullptr) { //loop 2 for moving right in B

            rightPtrA = downPtrA;
            downPtrB = rightPtrB;
            resultPos = 0;

            while (rightPtrA != nullptr && downPtrB != nullptr) { //loop 3 for moving right in A and down in B
                resultPos += rightPtrA->getValue() * downPtrB->getValue();
                rightPtrA = rightPtrA->getRight();
                downPtrB = downPtrB->getDown();
            }

            result.addElement(resultPos);

            rightPtrB = rightPtrB->getRight();
            j++;
        }

        downPtrA = downPtrA->getDown();
        i++;
    }

    return result;
}

//Function for returning determinant based in the dimension of the matrix
int MatrixList::determinant(Node* headA, int m, int n) {
    if (m != n) {
        cout << "Matriz es cuadrada, no se puede calcular determinante" << endl;
        return 0;
    }

    int det = headA->getValue();
    if (m == n && m == 2) { //matrix 2x2
        det = squareDeterminant(headA, nullptr) - (headA->getDown()->getValue() * headA->getRight()->getValue());
    }
    else if (m == n && m == 3) { //matrix 3x3
        int a = squareDeterminant(headA, nullptr) + squareDeterminant(headA->getRight(), headA) + squareDeterminant(headA->getRight()->getRight(), headA);
        int b = squareDeterminant2(headA, headA, 2, 2) + squareDeterminant2(headA, headA, 1, 1) + squareDeterminant2(headA, headA, 0, 0);
        det = a - b;
    }
    else if (m == n && m >= 4) { //matrix 4x4 and more...
        det = squareDeterminantLaplaceRec(headA, m);
    }
    return det;
}

//First part of determinant for 2x2 and 3x3 matrix
int MatrixList::squareDeterminant(Node* headA, Node* head2) {

    if (headA->getDown() == nullptr) //case base
        return headA->getValue();
    else if (headA->getDown()->getRight() == nullptr) { //case base 2
        return headA->getValue() * squareDeterminant(head2->getDown(), nullptr);
    }
    else {
        if (head2 != nullptr)
            return headA->getValue() * squareDeterminant(headA->getDown()->getRight(), head2->getDown());
        return headA->getValue() * squareDeterminant(headA->getDown()->getRight(), head2);
    }

}

//Second part of determinant for 3x3 matrix
int MatrixList::squareDeterminant2(Node* head, Node* actual, int counter, int counter2) {

    if (counter == 0 && actual->getRight() == nullptr) //case base
        return actual->getValue();
    else if (counter == 0) {
        if (counter2 == 2)
            return actual->getValue() * squareDeterminant2(head->getRight(), head->getRight(), 1, 1);
        else if (counter2 == 1)
            return actual->getValue() * squareDeterminant2(head->getRight(), head->getRight(), 0, 0);
        else if (counter2 == 0)
            return actual->getValue() * squareDeterminant2(head->getRight(), head->getRight(), 2, 2);
    }

    return squareDeterminant2(head, actual->getDown(), counter - 1, counter2);

}

//Determinant for 4x4 matrix or more
int MatrixList::squareDeterminantLaplaceRec(Node* head, int m) {
    int determinant = 0;

    Node* cofactor = head;
    int column = 0;

    while (cofactor != nullptr) { //se repite para formar cada matriz de cofactores

        if (column % 2 == 0) //si es par se suma
            determinant += cofactor->getValue() * squareDeterminantLaplace(head->getDown(), column, m - 1);
        else //si es impar se resta
            determinant -= cofactor->getValue() * squareDeterminantLaplace(head->getDown(), column, m - 1);

        cofactor = cofactor->getRight();
        column++;
    }

    return determinant;
}

int MatrixList::squareDeterminantLaplace(Node* _head, int colCofactor, int _m) {
    MatrixList A(_m, _m);
    int det = 0;

    Node* actual;
    int colActual;
    //crear matriz
    while (_head != nullptr) { //recorrer para abajo la matriz

        actual = _head;
        colActual = 0;

        while (actual != nullptr) { //recorrer hacia la derecha la matriz

            if (colActual != colCofactor)   //si no pertenece a la columna del cofactor
                A.addElement(actual->getValue()); //se van añadiendo los elementos 

            colActual++;
            actual = actual->getRight();
        }

        _head = _head->getDown();
    }

    //encontrar determinante de matriz
    det = A.determinant(A.getHead(), A.getM(), A.getN());

    return det;
}