#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    void inputPersonDetails() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void displayPersonDetails() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Student : public Person {
public:
    int rollNo;

    void inputStudentDetails() {
        inputPersonDetails();
        cout << "Enter Roll Number: ";
        cin >> rollNo;
    }

    void displayStudentDetails() {
        displayPersonDetails();
        cout << "Roll No: " << rollNo << endl;
    }
};

class Teacher : public Person {
public:
    string subject;

    void inputTeacherDetails() {
        inputPersonDetails();
        cout << "Enter Subject: ";
        cin >> subject;
    }

    void displayTeacherDetails() {
        displayPersonDetails();
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    Student s;
    Teacher t;

    cout << "\n=== Enter Student Details ===" << endl;
    s.inputStudentDetails();

    cout << "\n=== Enter Teacher Details ===" << endl;
    t.inputTeacherDetails();

    cout << "\n=== Student Information ===" << endl;
    s.displayStudentDetails();

    cout << "\n=== Teacher Information ===" << endl;
    t.displayTeacherDetails();

    return 0;
}


