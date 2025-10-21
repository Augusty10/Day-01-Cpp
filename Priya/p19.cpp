#include <iostream>
using namespace std;
int main() {
    int sumOdd=0, sumEven=0;
    for(int i=1;i<=20;i++){
        if(i%2==0) sumEven+=i;
        else sumOdd+=i;
    }
    cout << "Sum of Odds: " << sumOdd << endl;
    cout << "Sum of Evens: " << sumEven;
    return 0;
}
