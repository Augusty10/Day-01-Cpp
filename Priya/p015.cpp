#include <iostream>
using namespace std;
int main() {
	cout<<"Name : Priya Sahu"<<endl;
	cout<<"Class: Msc - 1st "<<endl;
    int a,b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if(!(a^b)) cout << "Equal"; else cout << "Not Equal";
    return 0;
}
