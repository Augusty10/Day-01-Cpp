#include <iostream>
using namespace std;
int main() {
cout<<"Name : Priya Sahu"<<endl;
	cout<<"Class: Msc - 1st "<<endl;
    int marks1, marks2;
    cout << "Enter marks of two students: ";
    cin >> marks1 >> marks2;
    cout << "Equal: " << (marks1 == marks2) << endl;
    cout << "Not Equal: " << (marks1 != marks2) << endl;
    cout << "First > Second: " << (marks1 > marks2) << endl;
    cout << "First < Second: " << (marks1 < marks2) << endl;
    cout << "First >= Second: " << (marks1 >= marks2) << endl;
    cout << "First <= Second: " << (marks1 <= marks2) << endl;
    return 0;
}
