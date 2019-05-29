#include<iostream>

using namespace std;

int main(){
	
	char a;
	//cout<<"    *    \n   * *   \n  * * *  \n * * * * \n* * * * *";
	cout<<"enter symbol: ";
	cin>>a;
	
	cout<<"    "<<a<<"    "<<endl;
	cout<<"   "<<a<<" "<<a<<"   "<<endl;
	cout<<"  "<<a<<" "<<a<<" "<<a<<"  "<<endl;
	cout<<" "<<a<<" "<<a<<" "<<a<<" "<<a<<" "<<endl;
	cout<<a<<" "<<a<<" "<<a<<" "<<a<<" "<<a;
	return 0;
}
