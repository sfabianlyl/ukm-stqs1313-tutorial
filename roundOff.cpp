#include<iostream>
#include<cmath>

using namespace std;

int main(){
	
	float a;
	int b;
	
	cout<<"Input the float: ";
	cin>>a;

	if(a>=0)
		if(a<(floor(a)+0.5))
			b=floor(a);
		else
			b=ceil(a);	
	else
		if(a<=floor(a)+0.5)
			b=floor(a);
		else
			b=ceil(a);
	cout<<"The rounded off integer of the result is: "<<b<<endl;
	
	b= (a>=0)? int(a+0.5):int(a-0.5);
	cout<<"The rounded off integer of the result is: "<<b;
	
}
