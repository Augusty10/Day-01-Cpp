// 06. nested loop 
// write a program that brew multiple cups  of different types of tea . for each type of tea . brew 3 cups using a nested logo 

# include<iostream> 
#include<string>

using namespace std;

int main(){
		 string teatypes[3] ={" green tea", " Lemon tea", " Black tea ", " Milk tea "};

	
	      for (int i =0; i<5; i++){
	      	cout<<" Brewing"<<teatypes[i]<<" ..."<<endl;
	      	 for (int j=0 ;j<=3 ;j++){
	      	 	cout<<" Brewing "<<j<<" Cup of "<<teaTypes[i]<<endl;
			   }
	      	
		  }
	
	return 0; 
}