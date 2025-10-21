/*
02 Nested if else 

A tea shop offer discounte based on the number  of cups offered. write a program that checks the number of cups oraderd and applies a discount More then 20
cups : 20% discount  

       Between 10 and 20 cups : 10 % discount 
       Less then 10 cups : No Discount 

*/

#include<iostream>

using namespace std; 
int main(){
	int cups;
	double pricePercup=2.5, totalPrice, discount;
	cout<<" Enter the number of tea cups ";
	cin>>cups;
	
	totalprice = pricepercup*cups; 
	if(cups>20){
		discount=0.20;
	}else if(cups>=10 && cups <=20){
		discount=0.10;
	}else{
		discount=0;
	}	
	totalprice=totalprice-(totalPrice*discount);
        // also u can use shortcut 
        cout<<" total price after discount is: "<<totalprice<<endl; 
	retrun 0; 
}