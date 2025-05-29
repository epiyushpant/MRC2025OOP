#include <iostream>
using namespace std;

struct Book {
    string title;
    int pages;
};

int main() {
    Book books[2];

    books[0] = { "C++ Basics", 200 };
    books[1] = { "Advanced C++", 350 };

    for (int i = 0; i < 2; i++) {
        cout << "Book: " << books[i].title << ", Pages: " << books[i].pages << endl;
    }

    return 0;
}
