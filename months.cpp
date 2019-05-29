#include<iostream>

using namespace std;

int main(){
	
	int month;
	
	cout<<"Enter a month between 1-12: ";
	cin>>month;
	
	switch(month){
		case 1: 
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12: cout<<"Number of days is 31"; break;
		case 2: cout<<"Number of days is 28 or 29"; break;
		case 4:
		case 6:
		case 9:
		case 11: cout<<"Number of days is 30"; break;
		default: cout<<"Enter a valid month between 1-12"; break;
	}
	
	return 0;
}
