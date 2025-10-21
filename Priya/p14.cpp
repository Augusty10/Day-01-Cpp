#include <iostream>
using namespace std;
int main() {
	cout<<"Name : Priya Sahu"<<endl;
	cout<<"Class: Msc - 1st "<<endl;
    int n;
    cout << "Enter limit: ";
    cin >> n;
    for(int i=1;i<=n;i++) cout << "Cube of " << i << " = " << i*i*i << endl;
    return 0;
}
