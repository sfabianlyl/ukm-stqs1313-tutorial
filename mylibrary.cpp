#include <cstring>

int factorial(int n){
	if(n>1)
		return n*factorial(n-1);
	else
		return n;
}

char encode(char x){
	return x + 10;
}

char decode(char x){
	return x - 10;
}

string encode(string x){
	for(int n=0,n<x.length(),n++)
		x[n]+=10;
	return x;
}

string encode(string x){
	for(int n=0,n<
	x.length(),n++)
		x[n]-=10;
	return x;
}
