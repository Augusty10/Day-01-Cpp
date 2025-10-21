// Break keyword 
// Write a program that keeps serving tea untill the user says they've had enogh (" input "stop"). use the exist statement when  user types " stop"

#include <iostream>
#include<string>
using namespace std;

int main(){
	string response ;
	 while (true){
	 	cout<<" Do you want more tea (type 'stop' to exit? :";
	 	getline(cin, response);
	 	
	 	if(response =="Stop"){
	 		// Exit the loop
	 		break; 
		 }
	 	
	 	cout<<" Here is another cup of tea .\n";
	 }
 cout<<" No  more tea will  be  served  to  you  : ",
	retrun 0 ;  
}