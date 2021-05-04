#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

#include "Constants.h"

int inputMarks();
string checkResult(int marks);
void printResult(const string &result);

int main() {
    int marks = inputMarks();

    string result = checkResult(marks);

    printResult(result);

    return 0;
}

void printResult(const string &result) {
    cout << "You " << result << " the exam." << endl;
}

string checkResult(int marks) {
    return (marks > Constants::examPassMarks)? "passed" : "failed";
}

int inputMarks() {
    int marks;

    cout << "Enter your marks ";
    cin >> marks;
    return marks;
}
