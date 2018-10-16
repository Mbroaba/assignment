#include <iostream>

#include <iomanip>
#include <fstream>
#include <string>
using namespace std;
using std::setw;



	struct Student {

		string idNumber;
		string name;
		unsigned int age;
		char gender;
		float score;
		char grade;

		} student[5];

int main() {

	double averageAge;
	double averageScore;
	unsigned int femaleCounter = 0;
	unsigned int maleCounter = 0;
	string newname;

		 ofstream os;

		os.open("hello.txt");
		 os << "ID Number" << setw(11) << "Name" << setw(11) << "Age" << setw(11) << "Gender" << setw(11) << "Score" << setw(11) << "Grade" <<endl;

		 os << "*******************************************************************" << endl;


		for(int i = 0; i < 5; i++) {

		cout <<"Enter id :" <<  setw(7);
		cin >> student[i].idNumber ;
		cout <<"Enter name :" ;
		cin >> student[i].name;
		cout <<"Enter age :" ;
		cin >> student[i].age;
		cout <<"Enter gender :" ;
			cin >> student[i].gender;

			if (student[i].gender == 'M')
			maleCounter++;
			else if (student[i].gender == 'F')
			femaleCounter++;
			else cout << "invalid Gender";


		cout <<"Enter score :" ;
		cin >> student[i].score;


			if (student[i].score >= 80)
			   student[i].grade = 'A';
			else if (student[i].score >= 79)
			  student[i].grade = 'B';
			else if (student[i].score >= 69)
			   student[i].grade = 'C';
			else if (student[i].score >= 59)
			   student[i].grade = 'D';
			else if (student[i].score >= 49)
		       student[i].grade = 'E';
			else
			   student[i].grade = 'F';


		 averageAge += student[i].age;
		 averageScore += student[i].score;
		 os << student[i].idNumber  << setw(15) << student[i].name << setw(11) << student[i].age  << setw(11) << student[i].gender  << setw(11) << student[i].score  << setw(11)  << student[i].grade  << endl;


			}

			os << "*****************************************************************************" << endl;
			os << "Average Score: "  <<   averageScore/5  << endl;
			os << "Average Age: "  <<   averageAge/5 << endl ;
			os << "Male Count: "  <<  maleCounter << endl;
			os << "Female Count: " << femaleCounter << endl;


    system("pause");
	return 0;

}



