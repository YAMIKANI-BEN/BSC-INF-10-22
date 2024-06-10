// Polygon.h
#pragma once

class Polygon {
protected:
    int mWidth;
    int mHeight;

public:
    virtual void SetValues(int width, int height);
    virtual int Area() = 0; // Added pure virtual function
};

// Polygon.cpp
#pragma once
#include "Polygon.h"

void Polygon::SetValues(int width, int height) {
    mWidth = width;
    mHeight = height;
}

// Rectangle.h
#pragma once
#include "Polygon.h"

class Rectangle : public Polygon {
public:
    int Area();
};

// Rectangle.cpp
#include "Rectangle.h"

int Rectangle::Area() {
    return mWidth * mHeight;
}

// Triangle.h
#pragma once
#include "Polygon.h"

class Triangle : public Polygon {
public:
    int Area();
};

// Triangle.cpp
#include "Triangle.h"

int Triangle::Area() {
    return mWidth * mHeight / 2;
}

// main.cpp
#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;

int main() {
    Rectangle rect;
    Triangle trgl;
    rect.SetValues(4, 5);
    trgl.SetValues(4, 5);
    cout << rect.Area() << '\n';
    cout << trgl.Area() << '\n';
    return 0;
}