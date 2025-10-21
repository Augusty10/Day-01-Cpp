#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(n==0) goto zero;
    if(n>0) goto positive;
    else goto negative;
zero:
    cout << "Zero"; return 0;
positive:
    cout << "Positive"; return 0;
negative:
    cout << "Negative"; return 0;
}
