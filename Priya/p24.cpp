#include <iostream>
using namespace std;
int main() {
    cout << "Break Example:" << endl;
    for(int i=1;i<=10;i++){
        if(i==5) break;
        cout << "Student Roll " << i << endl;
    }

    cout << "\nContinue Example:" << endl;
    for(int i=1;i<=10;i++){
        if(i==5) continue;
        cout << "Student Roll " << i << endl;
    }
    return 0;
}
