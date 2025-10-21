/*
04. Switch case 
=> Write a program that lets the user select a tea type from menu . Use  a switch statement to display the price based on the selected tea :
green tea: $2 
    : BlACK TEA = $3
    : ooLONG TEA = $4 
    
*/

#include<iostream>
using namespace std;

int main(){
	int  choice;
	double price;
	
	cout<<"Select your Tea \n ";
	cout<<"1. Green tea \n";
	cout<<"2.Oolong tea \n";
	cout<<"3. lemon tea \n";
	cout<<"4. black tea \n";
	Cout<<"5. Milk tea \n";
	cout<<" Enter your choice in number : \n";
	
	cin>>choice;
	switch(choice){
		case 1:
			price= 2.0;
			cout<<" You Selected Green tea . price"<<price<<endl;
			break;
		case 2: 
	      	price=3.0;
	    	cout<<" ";
	    	break;
	    case 3:
		     price=4.0;
			 cout<<" ";
			 break;
		default :
		    cout<<" Invalid  choice "<<endl;	 	
		break; 
	}
	
	
	return 0; 
}