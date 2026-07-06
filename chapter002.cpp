#include <iostream>
using namespace std;

int main()
{
    float decpounds, decfrac;
    int pounds, shillings, pence;

    cout << "Enter decimal pounds: ";
    cin >> decpounds;

    pounds = (int)decpounds;          // Whole pounds
    decfrac = decpounds - pounds;     // Decimal part

    shillings = decfrac * 20;         // Convert to shillings

    decfrac = (decfrac * 20) - shillings;
    pence = decfrac * 12;             // Convert remaining part to pence

    cout << "Equivalent in old notation = "
         << char(156) << pounds << "." << shillings << "." << pence;

    return 0;
}