/*write a program that allows a user to input the number of tea bags they have .Assign  additional bags to them
based on certain conditions(e.g. if they have fewer than 10 bags , give them 5 exstra ) . update the orignal
number using assighnment operators.  

*/

#include<iostream>
using namespace std;
int main(){
	int teaBags; 
	cout<<" enter the number of tea bags you have : ";
	cin>>teaBags;
	
	if(teaBags<10){
		teaBags += 5 ;
	}
	
			cout<<" your toatal bags are : "<<teaBags;

	return 0;
}
