#include <iostream>
using namespace std;

class Student {
public:
    int id;
    string name;
    float grade;

    void showInfo() {
        cout << "Student ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Grade: " << grade << endl;
    }
};

class Teacher {
public:
    int id;
    string name;
    float salary;

    void showInfo() {
        cout << "Teacher ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Student s;
    s.id = 1;
    s.name = "Ali";
    s.grade = 18.5;

    Teacher t;
    t.id = 100;
    t.name = "Mr. Reza";
    t.salary = 1200000;

    cout << "=== Student Info ===" << endl;
    s.showInfo();

    cout << "\n=== Teacher Info ===" << endl;
    t.showInfo();

    return 0;
}
