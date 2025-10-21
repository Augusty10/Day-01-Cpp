#include <iostream>
using namespace std;
int main() {
	cout<<"Name : Priya Sahu"<<endl;
	cout<<"Class: Msc - 1st "<<endl;
    int a, b; char op;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Enter operator (+,-,*,/): ";
    cin >> op;
    switch(op) {
        case '+': cout << a + b; break;
        case '-': cout << a - b; break;
        case '*': cout << a * b; break;
        case '/': cout << (float)a / b; break;
        default: cout << "Invalid operator";
    }
    return 0;
}
