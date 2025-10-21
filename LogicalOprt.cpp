/*
04. Logical Oprators 

create a program that checks if a user is eligble for tea subscription discount. 
The discount applies if the user is either a student or purchased more the 15 cups . Ask the user to input their status
(Student or not )  and their cup count. 

*/

# include<iostream>
using namespace std;

int main(){
	int cups; 
	bool isStudent;
	cout <<" Are you a Student(1 for yes and 0 for no ) ";
	cin>> isStudent;
	cout<<" how many cups of tea have yopu purchased ? ";
	cin>>cups;
	
	if( isStudent || cups>=15){
		cout<<" you are eligable for discount ";
	
	}else{
		cout<<" you are not eligable for discount";
	}
	return 0;
}