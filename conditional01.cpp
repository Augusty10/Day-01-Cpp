/* 
01.  if statement 
write a program that  checks if the user wants to order Green tea . if the user type the green tea , the program should confirm their order. 
*/

#include<iostrean>
#include<string>
using namespace std;

int main(){
	string teaorder;
	
	cout<<" enter your tea order";
	getline(cin, teaorder);
	if(teaorder=="Green tea"){
		cout<<"you have orderd Green tea"
	}
	return 0;
}

