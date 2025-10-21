// 05  Countinue Keyword 
// write a program that skips brewing green tea  if the user dislike it.   use a countinue statement to skip over green tea but brew 
// other types of tea in list . 

#include <iostream>
using namespace std;

int main(){
	 string teatypes[3] ={" green tea", " Lemon tea", " Black tea ", " Milk tea "};
	 
	 for ( int i =0;o<=3 ;i++) {
	 	if(teaTypes[i] ==" green tea "){
	 		cout<<" Skiiping the tea types"<<teaTypes[i]<<endl;
	 		continue; 
		 }
	 cout <<" brewing"<<teatypes[i]<<"..."<<endl;
	 
	 }
	
	return 0 ; 
} 