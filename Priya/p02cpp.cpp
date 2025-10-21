#include <iostream>
using namespace std;
int main() {
	cout<<"Name : Priya Sahu"<<endl;
	cout<<"Class: Msc - 1st "<<endl;
    int penPrice, bookPrice;
    cout << "Enter price of pen and book: ";
    cin >> penPrice >> bookPrice;
    cout << "Total: " << penPrice + bookPrice << endl;
    cout << "Difference: " << penPrice - bookPrice << endl;
    cout << "Product: " << penPrice * bookPrice << endl;
    cout << "Ratio: " << (float)penPrice / bookPrice << endl;
    cout << "Remainder: " << penPrice % bookPrice << endl;
    return 0;
}
