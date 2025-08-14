//programme to divide two numbers

#include<iostream>
#include<exception>
using namespace std;
class myclass : public exception{
	public:
		const char* what(){
			return" cannot divided by zero";
		}
};
int main(){
	double num1, num2, result;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;    
	myclass e;
	try{
		if(num2==0)
{
				throw e;
	}
	else{
		result = num1/num2;
		cout<<"The final answer is:"<<result<<endl;
	}
}
	catch(exception& ex){
		cout<<"Error: " << e.what() << endl;
	}
	return 0;
}
