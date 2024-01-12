#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int rollNumber;

public:
    Student(string studentName, int studentRollNumber) {
        name = studentName;
        rollNumber = studentRollNumber;
    }

    void displayDetails() {
        cout << "Name: " << name << "\tRoll Number: " << rollNumber << endl;
    }
};

int main() {
    const int numStudents = 3;
    Student students[numStudents] = {
        {"Kevin", 101},
        {"Yatin", 102},
        {"Vishwa", 103}
    };


    for (int i = 0; i < numStudents; ++i) {
        students[i].displayDetails();
    }

    return 0;
}

