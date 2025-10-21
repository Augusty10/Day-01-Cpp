#include <iostream>
#define AREA(l,b) (l*b)
using namespace std;
int main() {
    int l,b;
    cout << "Enter length and breadth: ";
    cin >> l >> b;
    cout << "Area: " << AREA(l,b);
    return 0;
}

