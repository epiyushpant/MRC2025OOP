// Extra lab: many exception types in one menu
// Compile: g++ 05_exception_types.cpp -o 05_exception_types

#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

class NegativeAge {
public:
    string message;
    NegativeAge(string m) { message = m; }
};

class FailMark {
public:
    int mark;
    FailMark(int m) { mark = m; }
};

int main() {
    int choice;
    cout << "Throw which type?" << endl;
    cout << "1 int     2 double   3 char" << endl;
    cout << "4 string  5 C-string 6 runtime_error" << endl;
    cout << "7 invalid_argument   8 out_of_range" << endl;
    cout << "9 NegativeAge class  10 FailMark class" << endl;
    cout << "11 catch-all (bool)  other = no throw" << endl;
    cout << "Choice: ";
    cin >> choice;

    try {
        if (choice == 1) throw 0;
        if (choice == 2) throw 3.14;
        if (choice == 3) throw 'E';
        if (choice == 4) throw string("File not found");
        if (choice == 5) throw "Empty name";
        if (choice == 6) throw runtime_error("Something failed at runtime");
        if (choice == 7) throw invalid_argument("Age cannot be text");
        if (choice == 8) throw out_of_range("Index 9 is outside the array");
        if (choice == 9) throw NegativeAge("Age cannot be negative");
        if (choice == 10) throw FailMark(25);
        if (choice == 11) throw true;
        cout << "No exception. Program finished normally." << endl;
    }
    catch (int n) {
        cout << "Caught int: cannot divide by " << n << endl;
    }
    catch (double d) {
        cout << "Caught double: " << d << endl;
    }
    catch (char c) {
        cout << "Caught char: invalid grade " << c << endl;
    }
    catch (string s) {
        cout << "Caught string: " << s << endl;
    }
    catch (const char* m) {
        cout << "Caught C-string: " << m << endl;
    }
    catch (invalid_argument& e) {
        cout << "Caught invalid_argument: " << e.what() << endl;
    }
    catch (out_of_range& e) {
        cout << "Caught out_of_range: " << e.what() << endl;
    }
    catch (runtime_error& e) {
        cout << "Caught runtime_error: " << e.what() << endl;
    }
    catch (NegativeAge e) {
        cout << "Caught user class NegativeAge: " << e.message << endl;
    }
    catch (FailMark e) {
        cout << "Caught user class FailMark: mark " << e.mark << " is fail" << endl;
    }
    catch (...) {
        cout << "Caught some other type (catch-all)." << endl;
    }

    return 0;
}
