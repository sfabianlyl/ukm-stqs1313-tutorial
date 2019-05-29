#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	double a,b,c,angleC;
	
	cout<<"Please enter the side 1 of triangle in cm: ";
	cin>>a;
	cout<<"Please enter the side 2 of triangle in cm: ";
	cin>>b;
	cout<<"Please enter the side 3 of triangle in cm: ";
	cin>>c;
	
	angleC=acos((a*a+b*b-c*c)/(2*a*b));
	
	cout<<"The area of triangle is: "<<0.5*a*b*sin(angleC)<<"cm^2";
	
	return 0;
}
