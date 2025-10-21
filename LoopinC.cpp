 
//01 While Loop 
//WAP that keeps track of tea orders. Each time a cup of tea is made , decrese the nymber of cups reaminning . 
//the loop Should run until all cups are served. 

#include<iostream>
using namespace std;

int main(){
	int teaCups;
	cout<<"Enter the number of Tea  cups to serve";
	cin>>teaCups;
	// while loop 
	while (teaCups>0){
       cout<<" Serving a cup of tea \n "<<teaCups<< "reamining "<< endl;
       teaCups--;
	}

   cout<<" All tea Cups are Served. "<<endl;
	return 0; 
}