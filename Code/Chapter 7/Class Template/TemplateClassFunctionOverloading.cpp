#include <iostream>
using namespace std;

template <class T>
class Storage {
private:
    T data;
public:
    Storage() {
        cout << "Storage object created." << endl;
    }

    void setData(T d) {
        data = d;
    }

    T getData() {
        return data;
    }
};

int main() {
    Storage<char> c;
    c.setData('X');
    cout << "Stored Character: " << c.getData() << endl;

    Storage<bool> b;
    b.setData(true);
    cout << "Stored Boolean: " << b.getData() << endl;

    return 0;
}
