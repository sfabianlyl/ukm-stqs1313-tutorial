#include<fstream>
#include<iomanip>
#include<iostream>
#include<string>

using namespace std;

int main(){
	
	string food1, food2, food3;
	float price1, price2, price3;
	int qtt1, qtt2, qtt3;
	
	ifstream file;
	file.open("input.txt");
	
	file>>food1>>price1;
	file>>food2>>price2;
	file>>food3>>price3;
	
	
	cout<<"How many "<<food1<<"? ";
	cin>>qtt1;
	cout<<"How many "<<food2<<"? ";
	cin>>qtt2;
	cout<<"How many "<<food3<<"? ";
	cin>>qtt3;
	
	float total1 = price1 * qtt1, total2 = price2 * qtt2, total3 = price3 * qtt3;
	
	
	
	int firstCol=13;
	int secondCol=11;
	int thirdCol=7;
	
	
	cout<<setw(firstCol + secondCol + thirdCol + 4)<<setfill('*')<<"*"<<endl;
	cout<<"*"<<setw(firstCol)<<setfill(' ')<<left<<"Food"<<"*"<<setw(secondCol)<<right<<"Quantity"<<"*"<<setw(thirdCol)<<right<<"Total"<<"*"<<endl;
	cout<<setw(firstCol + secondCol + thirdCol + 4)<<setfill('*')<<"*"<<endl;
	
	cout<<"*"<<setw(firstCol)<<setfill(' ')<<left<<food1;
	cout<<"*"<<setw(secondCol)<<right<<qtt1;
	cout<<"*"<<setw(thirdCol)<<right<<setprecision(2)<<fixed<<total1<<"*"<<endl;
	
	cout<<"*"<<setw(firstCol)<<left<<food2;
	cout<<"*"<<setw(secondCol)<<right<<qtt2;
	cout<<"*"<<setw(thirdCol)<<right<<setprecision(2)<<fixed<<total2<<"*"<<endl;
	
	cout<<"*"<<setw(firstCol)<<left<<food3;
	cout<<"*"<<setw(secondCol)<<right<<qtt3;
	cout<<"*"<<setw(thirdCol)<<right<<setprecision(2)<<fixed<<total3<<"*"<<endl;
	
	cout<<setw(firstCol + secondCol + thirdCol + 4)<<setfill('*')<<"*"<<endl;
	cout<<"*"<<setw(firstCol + secondCol + thirdCol + 2)<<setfill(' ')<<right<<setprecision(2)<<fixed<<total1+total2+total3<<"*"<<endl;
	cout<<setw(firstCol + secondCol + thirdCol + 4)<<setfill('*')<<"*"<<endl;
	return 0;
}
