#include <iostream>
using namespace std;

namespace Shapes {
    class Circle {
    private:
        double radius;
    public:
        Circle(double r) : radius(r) {}
        double area() {
            return 3.14 * radius * radius;
        }
    };
}

using namespace Shapes; 
int main() {
    Circle c(5.0);
    cout << "Area of circle: " << c.area() << endl;
    return 0;
}

