#ifndef RECTANGLE_H
#define RECTANGLE_H

// Class Definition
class Rectangle
{

    float width, height;
    int top, left;

    float calc_factor(float p);

public:
    ~Rectangle();
    Rectangle();
    Rectangle(float w, float h, float t, float l);

    void set_width(float w);
    void set_height(float h);
    void set_top(float t);
    void set_left(float l);

    void move(int top_change, int left_change);
    void rotate90();
    void expand(int pct);

    float get_width();
    float get_height();
    float get_top();
    float get_left();
    float get_area();

};

#endif