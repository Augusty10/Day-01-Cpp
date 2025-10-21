#include <iostream>
using namespace std;
int main() {
    int n;
    while(true){
        cout << "Enter a number: ";
        cin >> n;
        if(n>=1 && n<=25){
            cout << "Thank you user";
            break;
        } else cout << "Please enter number between 1-25 only!!" << endl;
    }
    return 0;
}
