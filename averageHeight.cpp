#include<iostream>

using namespace std;

int main(){
	int temp, avg, counter=0, total=0;
	
	while(true){
		cout<<"Enter Height: ";
		cin>>temp;
		if(temp==999)
			return 0;
		else if(temp<=200&&temp>=0){
			total+=temp;
			counter++;
		}else
			cout<<"Enter a valid number between 0-200"<<endl;
	}
	avg=total/counter;
	cout<<"Total is: "<<total<<endl;
	cout<<"Number of students is: "<<counter<<endl;
	cout<<"Average height is: "<<avg<<endl;
		
}	
