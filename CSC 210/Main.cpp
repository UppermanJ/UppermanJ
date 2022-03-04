#include <iostream>   
using namespace std;

// Definition
class Rectangle { 
    
    float width, height;
    int top, left;

    float calc_factor(float p){return 1 + p/100;}

    public: 

    ~Rectangle(){}

    Rectangle(){width = 1; height = 1; top = 1; left = 1;};

    Rectangle(float w, float h, float t, float l)
    {
        width = w;
        height = h;
        top = t;
        left = l;
    }

    void set_width(float w){width = w;}
    void set_height(float h){height = h;}
    void set_top(float t){top = t;}
    void set_left(float l){left = l;}

    float get_width(){return width;}
    float get_height(){return height;}
    float get_top(){return top;}
    float get_left(){return left;}
    float get_area(){return width * height;}

    void  move(int top_change, int left_change)
    {
        top = top + top_change;
        left = left + left_change;
    }

    void rotate90 () {
	int temp = width;
	width = height;
	height = temp;
    }

    void expand (int pct) {
	width = width * (1.0 + float(pct)/100);
	height = height * (1.0 + float(pct)/100);
    }


};

void show_rect(Rectangle a, Rectangle b){
    cout << a.get_width() << " " << a.get_height() << " " << a.get_top() << " " << a.get_left() << endl;
    cout << b.get_width() << " " << b.get_height() << " " << b.get_top() << " " << b.get_left() << endl;

    if(a.get_area() > b.get_area()){
        cout << "Rect A is larger by " << a.get_area() - b.get_area() << " sq. units";
    }else if(a.get_area() < b.get_area()){
        cout << "Rect B is larger by " << b.get_area() - a.get_area() << " sq. units";
    }else{
        cout << "The two rectangles are equal in area.";
    }
    cout << endl;
    
}

// Driver / Client
int main(){ 
    Rectangle RectA(7, 4, 3, 2);
    Rectangle RectB(10, 6, 5, 3);

    show_rect(RectA, RectB);

    RectA.set_width(1); RectA.set_height(30); RectA.set_top(3); RectA.set_left(2);

    show_rect(RectA, RectB);

    return 0;
}

