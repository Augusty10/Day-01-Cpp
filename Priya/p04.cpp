#include <iostream>
using namespace std;
int main() {
	cout<<"Name : Priya Sahu"<<endl;
	cout<<"Class: Msc - 1st "<<endl;
    int age; char gender;
    cout << "Enter age and gender(M/F): ";
    cin >> age >> gender;
    cout << "Senior Citizen and Female: " << (age > 60 && (gender == 'F' || gender == 'f')) << endl;
    cout << "Senior Citizen or Female: " << (age > 60 || (gender == 'F' || gender == 'f')) << endl;
    cout << "Not Senior Citizen: " << !(age > 60) << endl;
    return 0;
}
