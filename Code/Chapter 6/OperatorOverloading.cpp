/* Operator overloading is a feature in object-oriented programming
 which allows a programmer to redefine a built-in operator to work with
  user-defined data types.
*/

#include <iostream>
using namespace std;

class Point {
public:
    int x, y;

    Point(int a, int b) {
        x = a;
        y = b;
    }

    // Overload + operator
    Point operator+(const Point& p) {
        return Point(x + p.x, y + p.y);
    }

    void display() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p1(2, 3), p2(4, 5);
    Point p3 = p1 + p2;  // Uses overloaded +
    p3.display();        // Output: (6, 8)
    return 0;
}
