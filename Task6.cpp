#include <iostream>

using namespace std;
class Employee {
private:
    int age;

public:
    Employee(int employeeAge) : age(employeeAge) {}

    int getAge() const {
        return age;
    }

    int operator-(const Employee& other) const {
        return age - other.age;
    }
};

int main() {
    Employee elder(30);
    Employee younger(25);

    int ageDifference = elder - younger;

    cout << "Age difference: " << ageDifference << " years" << endl;

    return 0;
}

