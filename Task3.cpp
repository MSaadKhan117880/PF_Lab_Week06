#include<iostream>
using namespace std;

string checkTitle (char, int);

int main()
{
    char gender;
    int age;
    string nameTitle;

    cout << "Enter a Gender: ";
    cin >> gender;
    cout << "Enter age: ";
    cin >> age;

    nameTitle = checkTitle(gender, age);
    cout << "Your Title is " << nameTitle << endl;

    return 0;
}

string checkTitle (char gender, int age)
{
    string title;
    if (gender == 'm')
    {
        title = "Mr. ";
        if (age < 16)
        {
            title = "Master ";
        }
    }
    else if (gender == 'f')
    {
        title = "Ms. ";
        if (age < 16)
        {
            title = "Miss ";
        }
    }

    return title;
}