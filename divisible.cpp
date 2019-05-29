#include <iostream>

using namespace std;

int main(){
	
	char a=0;
	cout<<"Enter a choice between 1-5: ";
	
	cin>>a;
	while(a>'5'||a<'1'){
		cout<<"Try again: ";
		cin>>a;
	}	
	
	cout<<"Finalised choice: "<<a;
	return 0;
}
