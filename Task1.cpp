#include<iostream>
using namespace std;

char CalculateGrade (int);

int main()
{
    int marks;
    char grade;

    cout << "Enter Marks: ";
    cin >> marks;

    grade = CalculateGrade (marks);
    cout << "Grade = " << grade << endl;

    return 0;
}

char CalculateGrade (int marks)
{
    int totalMarks;
    float percentage;
    char grade;

    cout << "Enter Total Marks:";
    cin >> totalMarks;

    percentage = (marks * 100.0) / totalMarks;
    if (percentage < 50)
    {
        grade = 'F';
    }
    else if (percentage < 60)
    {
        grade = 'E';
    }
    else if (percentage < 70)
    {
        grade = 'D';
    }
    else if (percentage < 80)
    {
        grade = 'C';
    }
    else if (percentage < 90)
    {
        grade = 'B';
    }
    else
    {
        grade = 'A';
    }

    return grade;
}