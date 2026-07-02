#include "msoftcon.h"
struct circle
{
    int xCo,yCo;
    int radius;
    color fillcolor;
    fstyle fillstyle;
};
void draw_circ(circle c)
{
    set_color(c.fillcolor);
    set_fill_style(c.fillstyle);
    draw_circle(c.xCo,c.yCo,c.radius);
}
int main()
{
    init_graphics(); //initialize graphics system
                    //create circles
    circle c1={15,7,5,cBLUE,X_FILL};
    circle c2={41,12,7,cRED,O_FILL};
    // supply a radius for c3 (third value) and correct order
    circle c3={65,18,9,cGREEN,MEDIUM_FILL};

    draw_circ(c1); //draw circle
    draw_circ(c2);
    draw_circ(c3);
    set_cursor_pos(1,25); //cursor to lower left corner
    return 0;
}