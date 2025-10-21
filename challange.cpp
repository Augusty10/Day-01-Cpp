// challange 1:
//tea information Display  write a program that declares variable to store  the type of tea, its price per kilogram(float), and its rating(char)
// use data types effectivley and print them in formatted output using escape sequence . 

/* 
 #include<iostream> 
 #include<string> 
 
 using namespace std;

 int main(){
 	  cout<<" tea Informatione \n ";
 	  string teaType= " oolong Tea ";
 	  float priceinkg=120.00f;
 	  char rating='A';
 	  cout<<"Types of tea :\t"<<teaType <<"\n";
 	  cout<<"Price in per KG :\t"<<priceinkg<<"\n";
 	  cout<<"Rating:\t "<<rating<<"\n";

 	return  0 ; 
 }
*/


//challenge 2: 
//Modify tea Prices Create a program where the user inputs a base price for tea . use type casting  to increase  
// 	the price by  10% and dispaly the  rounded new price using explicit casting 

/*
#include <iostream>
using namespace std;

int main() {
    float basePrice;

    cout << "Enter the base price of tea (per Kg): ";
    cin >> basePrice;

    // Increase price by 10%
    float increasedPrice = basePrice * 1.10f;

    // Explicit casting to int for rounding
    int roundedPrice = (int)(increasedPrice + 0.5f); // add 0.5 to round properly

    cout << "\nBase Price: " << basePrice << endl;
    cout << "Increased Price (10% added): " << increasedPrice << endl;
    cout << "Rounded New Price: " << roundedPrice << endl;

    return 0;
}
*/


//challenge 3:
//	Favorite Tea input  write a program that takes the user's' favroite tea as input using getline and also asks cups of tea they want using
//	Display the result in a fun message. 












