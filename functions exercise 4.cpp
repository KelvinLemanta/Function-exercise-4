

// 137533 Kelvin Lemanta

// Function that receives 3 integers and returns the maximum of the three integers. 

#include <iostream>
using namespace std;

int main(){
	int a, b, c;
	cout<< "Enter three integers...";
	cout<< "Input the first interger: ";
	cin>> a;
	cout<< "Input the second interger: ";
	cin>> b;
	cout<< "Input the third interger: ";
	cin>> c;
	
	if( a >= b && a >= c){
		cout<< " The largest integer is: "<<a;
	}
	if( b >= a && b >= c){
		cout<< " The largest integer is: "<<b;
	}
	if( c >= a && c >= b){
		cout<< " The largest integer is: "<<c;
	}
	
	return 0;
}


