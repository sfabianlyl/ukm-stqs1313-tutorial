#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
using namespace std;

int function_name(int,int);
void drawLine();
void writeLine(string,int,string,float);
void writeCol(string,int);


int firstCol=13;
int secondCol=13;
int thirdCol=7;
int fourthCol=13;
int totalCol=firstCol+secondCol+thirdCol+fourthCol+5;
ofstream outFile;
outFile.open("result.txt");


int function_name(int a, int b){
	return a*b;
}

int main(){
	//initialise variables
	int array_size=3;
	
	string courseCode[array_size];
	float grade_point[array_size];
	int credit_hour[array_size];
	string grade[array_size];
	float total=0;
	int sum_credit=0;
	float gpa;
	
	//collect input
	for(int i=0; i<array_size ; i++){
		cout<<"Enter the subject code no."<<i+1<<": ";
		cin>>courseCode[i];
		cout<<"Enter the credit hour of subject "<<courseCode[i]<<": ";
		cin>>credit_hour[i];
		cout<<"Enter the grade of subject "<<courseCode[i]<<": ";
		cin>>grade[i];
		
		
	}
	
	//calculations
		//get grade_point based on grade
		for(int i=0; i<array_size ; i++){
			
			//test first char of each grade
			switch(grade[i][0]){
				case 'A':
				case 'a': grade_point[i]=4.00; break;
				case 'B':
				case 'b': grade_point[i]=3.00; break;
				case 'c':
				case 'C': grade_point[i]=2.00; break;
				case 'd':
				case 'D': grade_point[i]=1.00; break;
				case 'f':
				case 'F': grade_point[i]=0.00; break;
				
				default: cout<<"Error please check grade input"; return 0;
			}
			
			//test second char of each grade
			switch(grade[i][1]){
				case '+':grade_point[i]+=0.33; break;
				case '-':grade_point[i]-=0.33; break;
				
				
				default: ;
			}
			
			//test if user entered A+
			if(grade_point[i]>4.00) grade_point[i]=4.00;
		}
	
		//get gpa = sum(credit_hour*grade_point) / sum(credit_hour)
		for(int i=0; i<array_size ; i++){
			total+= (credit_hour[i]*grade_point[i]);
			sum_credit+=credit_hour[i];
		}
		gpa=total/sum_credit;
	
	
	//output
	drawLine();
	writeCol("Course Code",firstCol);
	outFile<<right;
	writeCol("Credit Hour", secondCol);
	writeCol("Grade",thirdCol);
	writeCol("Grade Point",fourthCol);
	outFile<<left<<"*"<<endl;
	drawLine();
	
	for(int i=0;i<array_size;i++){
		writeLine(courseCode[i],credit_hour[i],grade[i],grade_point[i]);
		drawLine();
	}
	outFile<<right;
	outFile<<"*"<<setw(totalCol-2)<<gpa<<"*"<<left<<endl;
	drawLine();
	
	return 0;
}

void drawLine(){
	outFile<<setw(totalCol)<<setfill('*')<<"*"<<setfill(' ')<<endl;
}

void writeLine(string a,int b, string c, float d){
	outFile<<"*"<<setw(firstCol)<<left<<a<<"*"
			<<setw(secondCol)<<right<<b<<"*"
			<<setw(thirdCol)<<right<<c<<"*"
			<<setw(fourthCol)<<right<<d<<"*"<<left<<endl;
}

void writeCol(string a, int n){
	outFile<<"*"<<setw(n)<<a;
}
