/*
A tea shops offer  a loyality program .customers who buty more the 20 cups of tea to get a speacial "Gold"
badge , and those who buy 10 to 20 cups to get a "silver "badge. wriet a program to display the badge they will recevie 
based on the number of cups they buy.
*/

#include<iostream> 

using namespace std;

int main(){
	int cups;
	
	cout<<" Enter the number of cups you have : ";
	cin>>cups;
	
	if(cups>20) 
	{
	cout<<" you will get a gold badge ";
	} else if(cups>20 && cups <=10 ){
		cout<<" you will geat a Silver badge"<<endl;
			
	} else{
		cout<<"No badge for you"<<endl;
	} 
	return 0; 
}



