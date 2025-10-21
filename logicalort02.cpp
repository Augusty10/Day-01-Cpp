/* 
02. if -else statement 

write a program that checks , if tea shop is open . if the current hour (input by the user ) is between 8 Am 
and 6 pm , the shop is open ; otherwise , it's closed 

*/
#include<iostream>
using namespace std;

int main(){
	int hour;
	
	cout<<" Entyer the current hour(0-23): ";
	cin>>hour; 
	if(hour>=8 && <=18){
     cout<<"tea Shop is open !"<<endl;
	 		
	}else{
		cout<<" tea shop is close";
	}
	return 0;
	
}