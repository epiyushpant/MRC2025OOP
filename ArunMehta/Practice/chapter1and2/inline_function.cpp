#include <iostream>
using namespace std;

inline int multiply(int a, int b){
    return a*b;
}

int main(){
    int result = multiply(3,4); // compiler replaces with int resutl = 3 * 4

    cout <<result;

}