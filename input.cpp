#include<iostream>
#include<string>
using namespace std;

int main(){
	   string userTea;
	   int teaQuantity;
	   cout<<" what  would  you like to order in tea? \n ";
	   getline(cin,userTea);                        // getline for the input 
	   
	   // ask for quantity 
	   cout<<" how  Many cups of"<<userTea<<" would you like to have? ";
	   cin>>teaQuantity;
	   cout<<userTea;
	return 0; 
} 