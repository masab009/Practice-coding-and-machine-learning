#include<iostream>
using namespace std;
class Student {
private:
	string rollno,name;
	int acc_marks,fin_marks,econ_marks;
	char grade;
public:
	const int total = 300;
	Student (string name,string rollno,int acc_marks,int fin_marks,int econ_marks) {
		this->name = name;
		this->rollno = rollno;
		this->acc_marks = acc_marks;
		this->fin_marks = fin_marks;
		this->econ_marks = econ_marks;
	}
	int get_marks() {
		return (acc_marks + fin_marks + econ_marks);
	}
	double calculate_percentage() {
		return (acc_marks + fin_marks + econ_marks) / static_cast<double>(total);
	}
	char get_grade(double percentage) {
		if (percentage > 0.40 && percentage < 0.60) {
			return 'c';
		}
		else if (percentage > 0.60 && percentage < 0.80) {
			return 'b';
		}
		else if (percentage > 0.80 && percentage < 1.0) {
			return 'a';
		}
		else { return 'f'; }
	}
};


int main() {
	Student s1("Masab", "23i-4554", 80, 70, 90);
	

}