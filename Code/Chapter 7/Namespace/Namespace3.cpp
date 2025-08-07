#include <iostream>
using namespace std;

namespace Greetings {
    void hello() {
        cout << "Hello, user!" << endl;
    }

    void bye() {
        cout << "Goodbye!" << endl;
    }
}

using namespace Greetings;

int main() {
    hello(); // No need to write Greetings::hello()
    bye();
    return 0;
}
