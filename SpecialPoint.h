//
// Created by mark on 1/23/20.
//

#include "Point.h"

enum Color {none, red, green, blue, purple};

#ifndef MEMORYMANAGER_SPECIALPOINT_H
#define MEMORYMANAGER_SPECIALPOINT_H
class SpecialPoint : public Point {
protected:
    Color pointColor;

public:
    SpecialPoint (int x, int y, int z, Color p):Point(x, y, z), pointColor(p) {
        cout << "SpecialPoint Constructor" << endl;
    }


};
#endif //MEMORYMANAGER_SPECIALPOINT_H
