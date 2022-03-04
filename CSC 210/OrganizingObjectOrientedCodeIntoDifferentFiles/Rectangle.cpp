#include <iostream>
#include "Rectangle.h"
using namespace std;

// Class Implementation
    Rectangle::Rectangle() {width = 1; height = 1; top = 1; left = 1;};
    Rectangle::Rectangle(float w, float h, float t, float l) {width = w; height = h; top = t; left = l;}
    Rectangle::~Rectangle() {}

    void Rectangle::set_width(float w) { width = w; }
    void Rectangle::set_height(float h) { height = h; }
    void Rectangle::set_top(float t) { top = t; }
    void Rectangle::set_left(float l) { left = l; }

    float Rectangle::calc_factor(float p) { return 1 + p / 100; }
    float Rectangle::get_width() { return width; }
    float Rectangle::get_height() { return height; }
    float Rectangle::get_top() { return top; }
    float Rectangle::get_left() { return left; }
    float Rectangle::get_area() { return width * height; }

    void Rectangle::move(int top_change, int left_change)
    {
        top = top + top_change;
        left = left + left_change;
    }

    void Rectangle::rotate90()
    {
        float temp = width;
        width = height;
        height = temp;
    }

    void Rectangle::expand(int pct)
    {
        width = width * (1.0 + float(pct) / 100);
        height = height * (1.0 + float(pct) / 100);
    }



