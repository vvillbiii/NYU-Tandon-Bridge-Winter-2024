#include <iostream>
using namespace std;


void printTriangle(int n);
void printOppositeTriangles(int n);
void printRuler(int n);

int main()
{

    cout << "printTriangle with int 4:\n";
    printTriangle(4);
    cout << endl;
    cout << "print Opposite Triangles with int 4:\n";
     printOppositeTriangles(4);
    cout << endl;
    cout << "print ruler with int 4:\n";
    printRuler(4);
    return 0;
}

void printTriangle(int n) {
    if (n <= 0) return;
    else {
        printTriangle(n-1);
        for (int i = 0; i < n; i++) {
            cout << "*";
        }
        cout << endl;
    }
}

void printOppositeTriangles(int n) {
    if (n <= 0) return;
    else {
        for (int i = 0; i < n; i++) {
            cout << "*";
        }
        cout << endl;
        printOppositeTriangles(n-1);
        for (int i = 0; i < n; i++) {
            cout << "*";
        }
        cout << endl;
    }
}

void printRuler(int n) {
    if (n <= 0) return;
    else {
        printRuler(n-1);
        for (int i = 0; i < n; i++) {
            cout << "-";
        }
        cout << endl;
        printRuler(n-1);
    }
    
}