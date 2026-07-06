#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << setiosflags(ios::left);

    cout << setw(15) << "Last name"
         << setw(15) << "First name"
         << setw(25) << "Street address"
         << setw(15) << "Town"
         << setw(10) << "State"
         << setw(10) << "Zip code" << endl;

    cout << "------------------------------------------------------------" << endl;

    cout << setw(15) << "Jones"
         << setw(15) << "Bernard"
         << setw(25) << "109 Pine Lane"
         << setw(15) << "Littletown"
         << setw(10) << "MI"
         << setw(10) << "49855" << endl;

    cout << setw(15) << "O'Brian"
         << setw(15) << "Coleen"
         << setw(25) << "42 E. 99th Ave."
         << setw(15) << "Bigcity"
         << setw(10) << "NY"
         << setw(10) << "10001" << endl;

    cout << setw(15) << "Wong"
         << setw(15) << "Harry"
         << setw(25) << "121-A Alabama St."
         << setw(15) << "Lakeville"
         << setw(10) << "IL"
         << setw(10) << "60401"   << endl;

    return 0;
}