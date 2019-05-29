#include<iostream>
using namespace std;

int mystery(int,int);


int main(){
//	double a=;
	cout<<mystery(3.0,5.0);
	return 0;
}

int mystery(int in1, int in2){
	cout<<in1<<endl;
	cout<<in2<<endl;
	
	if (in1 > 0){
		
		for(int i = 1; i <= in2; i++){
			in2=in2*i;
			cout<<in2<<endl;
		}
			
//		cout<<in2<<endl;
		return in2;
		
	}else if (in2 > 0){
		
		for (int i = 0; i <= in2; i++)
			in1=in1+i;
		return in1;
		
	}
	return 0;
}
