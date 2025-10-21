#include <iostream>
using namespace std;
int main() {
    int age; char gender;
    cout << "Enter age and gender(M/F): ";
    cin >> age >> gender;
    if(age > 18){
        if(gender=='M' || gender=='m') cout << "Room number 10";
        else if(gender=='F' || gender=='f') cout << "Room number 12";
        else cout << "Room number 8";
    } else cout << "Not eligible for voting";
    return 0;
}
