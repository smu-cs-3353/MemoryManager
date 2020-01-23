#include <iostream>
#include "algoNew.h"
#include "Point.h"
using std::cout;
using std::cin;
using std::endl;


int main() {
    cout << "Global new." << endl;
    int* ptr01 = new int;
    delete ptr01;

    cout << endl << "Specialized new." << endl;
    Point* p = new Point(2, 3, 4);
    delete p;

    cout << endl << "Specialized new array." << endl;
    Point* pArr = new Point[5] {{1, 2, 3}, {2, 3, 4}};
    delete[] pArr;

    return 0;
}
