#include<iostream>

using namespace std;

int main() {
	
	double r,h, pi=3.1415926;
	
	cout<<"Please enter the height of cylinder in cm: ";
	cin>>h;
	cout<<"Please enter the radius of cylinder in cm: ";
	cin>>r;
	
	cout<<"The volume of the cylinder is: "<<pi*r*r*h<<"cm^3"<<endl;
	cout<<"The total surface area of the cylinder is: "<<2*pi*r*(r+h)<<"cm^2"<<endl;
	
	return 0;
}
