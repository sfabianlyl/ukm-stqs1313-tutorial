#include<iostream>
#include "mylibrary.h"

using namespace std;

int main(){
//	int num;
//	cout<<"Enter the integer you wish to perform factorial: ";
//	cin>>num;
//	cout<<factorial(num);

	string a;
	cout<<"Enter the character to encode: ";
	cin>>a;
	cout<<"The character after encoding is: "<<encode(a)<<endl<<endl;
	
	cout<<"Enter the character to decode: ";
	cin>>a;
	cout<<"The character after decoding is: "<<decode(a);
	

}


