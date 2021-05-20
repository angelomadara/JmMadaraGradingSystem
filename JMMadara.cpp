#include <iostream>
#include <string>

using std::cout; using std::cin;
using std::endl; using std::string;

void standingAve(){
	
	int counter_x = 0;
	
	cout << "Enter the number of students : ";
	cin >> counter_x;

	string student_name_array[counter_x];
	string student_number_array[counter_x];
	string student_quiz_array[counter_x];
	string student_lab_array[counter_x];
	string student_midterm_array[counter_x];
	
	string student_name = "";
	string student_number = "";
	
	
	for (int i = 0; i < counter_x; i++)
	{
		cout << "Enter student name: ";
		cin.ignore();
		getline(cin,student_name,'\n');
		student_name_array[i] = " "+student_name;
	}
	
	
	for (int i = 0; i < counter_x; i++)
	{
		cout << "Enter student number: ";
		cin >> student_number;
		student_number_array[i] = "  "+student_number;
	}
	
	
	for (int i = 0; i < counter_x; i++)
	{
		float mq1 = 0, mq2 = 0, mq3 = 0, lab1 = 0, lab2 = 0, lab3 = 0, me = 0;
	
		cout << endl << "";
		
		m1:
		cout << "Enter mq1: "; cin >> mq1;
		if(mq1 < 60 || mq1 > 100){ goto m1; }
		
		m2:
		cout << "Enter mq2: "; cin >> mq2;
		if(mq2 < 60 || mq2 > 100){ goto m2; }
		
		m3: 
		cout << "Enter mq3: "; cin >> mq3;
		if(mq3 < 60 || mq3 > 100){ goto m3; }
		
		l1:
		cout << "Enter lab1: "; cin >> lab1;
		if(lab1 < 60 || lab1 > 100){ goto l1; }
		
		l2:
		cout << "Enter lab2: "; cin >> lab2;
		if(lab2 < 60 || lab2 > 100){ goto l2; }
		
		l3:
		cout << "Enter lab3: "; cin >> lab3;
		if(lab3 < 60 || lab3 > 100){ goto l3; }
		
		me:
		cout << "Enter midterm exam: "; cin >> me;
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
		else if(_midterm_grade >= 95 && _midterm_grade <= 97){ final_grade = 1.25; }
		else if(_midterm_grade >= 92 && _midterm_grade <= 94){ final_grade = 1.50; }
		else if(_midterm_grade >= 89 && _midterm_grade <= 91){ final_grade = 1.75; }
		else if(_midterm_grade >= 86 && _midterm_grade <= 88){ final_grade = 2.00; }
		else if(_midterm_grade >= 83 && _midterm_grade <= 85){ final_grade = 2.25; }
		else if(_midterm_grade >= 80 && _midterm_grade <= 82){ final_grade = 2.50; }
		else if(_midterm_grade >= 77 && _midterm_grade <= 79){ final_grade = 2.75; }
		else if(_midterm_grade >= 75 && _midterm_grade <= 76){ final_grade = 3; }
		else if(_midterm_grade >= 72 && _midterm_grade <= 74){ final_grade = 4; }
		else if(_midterm_grade >= 60 && _midterm_grade <= 71){ final_grade = 5; }
		
		// passed or failed condition
		// remark
		string passed_or_failed = "";
		if(final_grade >= 1 && final_grade <= 3){
			passed_or_failed = "PASSED";
		}else{
			passed_or_failed = "FAILED";
		}
		
		student_quiz_array[i] = "Mq1, Mq2, Mq3 = " + std::to_string(mq1) + "," + std::to_string(mq2) + "," + std::to_string(mq3);
		student_lab_array[i] = "Lab1, Lab2, Lab3 = " + std::to_string(lab1) + "," + std::to_string(lab2) + "," + std::to_string(lab3);
		student_midterm_array[i] = "Midterm Exam = " + std::to_string(me);
		
	}
	
	
	// output
	cout << endl << endl << "OUTPUT:" << endl;
	cout << endl << "+----------------------------------------------------------+" << endl << endl;
	for (int i = 0; i < counter_x; i++)
	{
		cout << student_name_array[i] << endl;
		cout << student_number_array[i] << endl;
		cout << student_quiz_array[i] << endl;
		cout << student_lab_array[i] << endl;
		cout << student_midterm_array[i] << endl;
		cout << endl << "+----------------------------------------------------------+" << endl << endl;
	}
	
}


int main(){
	
	standingAve();
	return 0;
	
}