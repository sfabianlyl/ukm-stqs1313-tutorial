#include<iostream>

using namespace std;

int factorial(int);



int main(){
	int num;
	
	cout<<"Enter a number you wish to perform factorial on: ";
	cin>>num;
	
	cout<<factorial(num);
	return 0;
}

int factorial(int n){
	if(n>1)
		return n*factorial(n-1);
	else
		return n;
}
