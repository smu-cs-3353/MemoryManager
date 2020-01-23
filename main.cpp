#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class Point {
private:
    unsigned int x, y, z;
public:
    Point (unsigned int xval = 0, unsigned int yval = 0, unsigned int zval = 0):
        x(xval), y(yval), z(zval) {
        cout << "Initializing Point Object with [" << x << ", "
                  << y << ", " << z << "]." << endl;
    }

    ~Point () {
        cout << "Executing Point destructor" << endl;
    }

    void* operator new(size_t numBytes) {
        cout << "Allocating Point with new: " << numBytes << " bytes." << endl;
        return malloc(numBytes);
    }

    void operator delete(void* ptr) {
        cout << "De-allocating Point with delete." << endl;
        free(ptr);
    }

    void* operator new[](size_t numBytes) {
        cout << "Allocating Point Array with new[]: " << numBytes << " bytes." << endl;
        return malloc(numBytes);
    }

    void operator delete[] (void* ptr) {
        cout << "De-allocating Point array with delete." << endl;
        free(ptr);
    }

};

int main() {
    cout << "Global new." << endl;
    int* ptr01 = new int;
    delete ptr01;

    cout << "Specialized new." << endl;
    Point* p = new Point();
    delete p;

    cout << "Specialized new array." << endl;
    Point* pArr = new Point[5] {{1, 2, 3}, {2, 3, 4}};
    delete[] pArr;

    return 0;
}
