#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
	int num, total=0;
	cout<<"Enter a number: ";
	cin>>num;
	
	while(num>0){
		cout<<num%10<<endl;
		total=total+num%10;
		num=num/10;
	}
	
	cout<<"total: "<< total;
	
	int num, total=0,divider=10;
	cout<<"Enter a number: ";
	cin>>num;
		
	while(divider>1){
		if(divider<num){
			divider=divider*10;
		}else{
			divider=divider/10;
			cout<<num/divider<<endl;
			total=total+num/divider;
			num=num%divider;
		}
	}
	cout<<"total: "<< total;
}
