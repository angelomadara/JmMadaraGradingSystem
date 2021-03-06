#include <iostream.h>
#include <conio.h>
#include <string.h>

using namespace std;

void standingAve(string student_name,string student_number){
	float mq1 = 0, mq2 = 0, mq3 = 0, lab1 = 0, lab2 = 0, lab3 = 0, me = 0;
	
	std::cout << endl << "";
	
	m1:
	std::cout << "Enter mq1: "; std::cin >> mq1;
	if(mq1 < 60 || mq1 > 100){ goto m1; }
	
	m2:
	std::cout << "Enter mq2: "; std::cin >> mq2;
	if(mq2 < 60 || mq2 > 100){ goto m2; }
	
	m3: 
	std::cout << "Enter mq3: "; std::cin >> mq3;
	if(mq3 < 60 || mq3 > 100){ goto m3; }
	
	l1:
	std::cout << "Enter lab1: "; std::cin >> lab1;
	if(lab1 < 60 || lab1 > 100){ goto l1; }
	
	l2:
	std::cout << "Enter lab2: "; std::cin >> lab2;
	if(lab2 < 60 || lab2 > 100){ goto l2; }
	
	l3:
	std::cout << "Enter lab3: "; std::cin >> lab3;
	if(lab3 < 60 || lab3 > 100){ goto l3; }
	
	me:
	std::cout << "Enter midterm exam: "; std::cin >> me;
	if(me < 60 || me > 100){ goto me; }
	
	// 2/3 
	float x1 = 2, y1 = 3;
	// 1/3 
	float x2 = 1, y2 = 3;
	
	// compute and get the 2/3 average of midterm quiz
	float mq_average = x1 / y1;
	float mq = ((mq1 + mq2 + mq3)/3) * mq_average;
	
	// compute and get the 1/3 average of the laboratory
	float lab_average = x2 / y2;
	float lab = ((lab1 + lab2 + lab3)/3) * lab_average;
	
	// total stading score
	// sum of midterm and laboratory
	float standing_score = mq + lab;
	
	// compute and get the averages
	float standing_average = x1 / y1;
	float midterm_average = x2 / y2;
	float midterm_grade = 0;
	
	// midterm grade computation
	// first part get the 2/3 of standing_score 
	// second part get the 1/3 of midterm exam score
	midterm_grade =  (standing_score * standing_average) + (me * midterm_average);
	
	// grade conditions
	float final_grade = 0;
	// convert floating number to integer
	int _midterm_grade = (int)midterm_grade;
	// midterm grade conditions
	if(_midterm_grade >= 98 && _midterm_grade <= 100){
		final_grade = 1.00;	
	}
	else if(_midterm_grade >= 95 && _midterm_grade <= 97){
		final_grade = 1.25;
	}
	else if(_midterm_grade >= 92 && _midterm_grade <= 94){
		final_grade = 1.50;
	}
	else if(_midterm_grade >= 89 && _midterm_grade <= 91){
		final_grade = 1.75;
	}
	else if(_midterm_grade >= 86 && _midterm_grade <= 88){
		final_grade = 2.00;
	}
	else if(_midterm_grade >= 83 && _midterm_grade <= 85){
		final_grade = 2.25;
	}
	else if(_midterm_grade >= 80 && _midterm_grade <= 82){
		final_grade = 2.50;
	}
	else if(_midterm_grade >= 77 && _midterm_grade <= 79){
		final_grade = 2.75;
	}
	else if(_midterm_grade >= 75 && _midterm_grade <= 76){
		final_grade = 3;
	}
	else if(_midterm_grade >= 72 && _midterm_grade <= 74){
		final_grade = 4;
	}
	else if(_midterm_grade >= 60 && _midterm_grade <= 71){
		final_grade = 5;
	}
	
	// passed or failed condition
	// remark
	string passed_or_failed = "";
	if(final_grade >= 1 && final_grade <= 3){
		passed_or_failed = "PASSED";
	}else{
		passed_or_failed = "FAILED";
	}
	
	std::cout << endl << endl;
		
	std::cout << "Name = " << student_name << endl;
	std::cout << "Id No = " << student_number << endl;
	std::cout << "Mq1, Mq2, Mq3 = " << mq1 << "," << mq2 << "," << mq3 << endl;
	std::cout << "Lab 1, Lab 2, Lab 3 = " << lab1 << "," << lab2 << "," << lab3 << endl;
	std::cout << "Midterm exam = " << me << endl << endl;
	
	std::cout << "Student Name: " << student_name << endl << "Student Number: " << student_number << endl;
	std::cout << "Your midterm grade in percentage format is : " << midterm_grade << endl;
	std::cout << "Your midterm grade in point format is : " << final_grade << endl;
	std::cout << "Your remark is : " << passed_or_failed << endl;
}


int main(){
	string student_name = "";
	string student_number = "";
	
	std::cout << "Enter student name: ";
	//std::cin >> student_name;
	getline(cin,student_name);
	std::cout << "Enter student number: ";
	std::cin >> student_number;
	
	// void function
	standingAve(student_name,student_number);

	std::cout << endl;
	
	getch();
	return 0;
}