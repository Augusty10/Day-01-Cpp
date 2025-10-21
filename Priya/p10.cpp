#include <iostream>
using namespace std;
int main() {
	cout<<"Name : Priya Sahu"<<endl;
	cout<<"Class: Msc - 1st "<<endl;
    int x, y, z;
    cout << "Enter three numbers: ";
    cin >> x >> y >> z;
    int largest = (x > y) ? ((x > z) ? x : z) : ((y > z) ? y : z);
    cout << "Largest: " << largest;
    return 0;
}
