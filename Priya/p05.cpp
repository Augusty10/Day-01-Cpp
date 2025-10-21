#include<iostream>
using namespace std;
int main() {
	cout<<"Name : Priya Sahu"<<endl;
	cout<<"Class: Msc - 1st "<<endl;
    int machine1 = 6, machine2 = 3;
    cout << "AND: " << (machine1 & machine2) << endl;
    cout << "OR: " << (machine1 | machine2) << endl;
    cout << "XOR: " << (machine1 ^ machine2) << endl;
    cout << "NOT machine1: " << (~machine1) << endl;
    cout << "Shift Left machine1: " << (machine1 << 1) << endl;
    cout << "Shift Right machine1: " << (machine1 >> 1) << endl;
    return 0;
}
