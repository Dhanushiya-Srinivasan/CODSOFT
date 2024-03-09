#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

const int MAX_STUDENTS = 100;

int main() {
    string names[MAX_STUDENTS];
    double grades[MAX_STUDENTS];

    int numStudents;

    // Input the number of students
    cout << "Enter the number of students (up to " << MAX_STUDENTS << "): ";
    cin >> numStudents;

    if (numStudents <= 0 || numStudents > MAX_STUDENTS) {
        cerr << "Invalid number of students. Exiting program." << endl;
        return 1;
    }

    // Input student names and grades
    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter name for student " << i + 1 << ": ";
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the input buffer
        getline(cin, names[i]);

        cout << "Enter grade for student " << i + 1 << ": ";
        cin >> grades[i];
    }

    // Calculate average grade
    double totalGrade = 0;
    for (int i = 0; i < numStudents; ++i) {
        totalGrade += grades[i];
    }
    double averageGrade = totalGrade / numStudents;

    // Find highest and lowest grades
    double highestGrade = grades[0];
    double lowestGrade = grades[0];

    for (int i = 1; i < numStudents; ++i) {
        if (grades[i] > highestGrade) {
            highestGrade = grades[i];
        }
        if (grades[i] < lowestGrade) {
            lowestGrade = grades[i];
        }
    }

    // Display results
    cout << "\nAverage Grade: " << fixed << setprecision(2) << averageGrade << endl;
    cout << "Highest Grade: " << highestGrade << endl;
    cout << "Lowest Grade: " << lowestGrade << endl;

    return 0;
}