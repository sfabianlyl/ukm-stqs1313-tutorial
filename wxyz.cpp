#include<iostream>

using namespace std;

int main(){
	int w,x,y,z;
	
	x = 7;
	y = 2 * x - 3;
	z = x + y - 3;
	x = z / y;
	y = z - x;
	w = x + y + 2 * z;
	w = w / 2 * 2;
	y = w * 2 + z - x;
	
	cout<<"w = "<<w<<endl<<"x = "<<x<<endl<<"y = "<<y<<endl<<"z = "<<z;
	
	return 0;
	// what is w, x, y and z?
}
