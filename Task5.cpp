#include <iostream>

using namespace std;

class MathOperations {
public:
    int divide(int numerator, int denominator) {
        if (denominator == 0) {
            throw "Cannot divide by zero.";
        }

        if (numerator < 0 || denominator < 0) {
            throw "Both numbers must be non-negative.";
        }

        return numerator / denominator;
    }
};

int main() {
    MathOperations math;

    try {
        cout << "Result: " << math.divide(10, 2) << endl; 
        cout << "Result: " << math.divide(10, 0) << endl;
        cout << "Result: " << math.divide(-5, 3) << endl; 
        cout << "Result: " << math.divide(8, -2) << endl;
    } catch (const char* msg) {
        cout << "Error: " << msg << endl;
    }

    return 0;
}

