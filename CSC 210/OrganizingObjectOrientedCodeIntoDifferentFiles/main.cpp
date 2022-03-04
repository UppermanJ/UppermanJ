#include <iostream>
#include "Rectangle.h"
#include "Rectangle.cpp"
using namespace std;

// Driver / Client
void show_rect(Rectangle a, Rectangle b)
{
    cout << a.get_width() << " " << a.get_height() << " " << a.get_top() << " " << a.get_left() << endl;
    cout << b.get_width() << " " << b.get_height() << " " << b.get_top() << " " << b.get_left() << endl;

    if (a.get_area() > b.get_area())
    {
        cout << "Rect A is larger by " << a.get_area() - b.get_area() << " sq. units";
    }
    else if (a.get_area() < b.get_area())
    {
        cout << "Rect B is larger by " << b.get_area() - a.get_area() << " sq. units";
    }
    else
    {
        cout << "The two rectangles are equal in area.";
    }
    cout << endl;
}

int main()
{
    Rectangle RectA;
    Rectangle RectB(10, 6, 5, 3);

    show_rect(RectA, RectB);

    RectA.set_width(1);
    RectA.set_height(30);
    RectA.set_top(3);
    RectA.set_left(2);

    show_rect(RectA, RectB);

    return 0;
}
