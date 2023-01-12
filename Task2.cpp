#include<iostream>
using namespace std;

float discount (string, string, float);

int main()
{
    string day;
    string month;
    float amount;
    float finalAmount;

    cout << "Enter Day Name: ";
    cin >> day;
    cout << "Enter Month Name: ";
    cin >> month;
    cout << "Enter amount: ";
    cin >> amount;

    finalAmount = discount (day, month, amount);

    cout << "Final Price is " << finalAmount << endl;

    return 0;
}

float discount (string day, string month, float amount)
{
    float finalAmount;

    if(day == "Sunday" && (month == "October" || month == "March" || month == "August"))
    {
        finalAmount = (10.0/100.0) * amount;
        finalAmount = amount - finalAmount;
    }
    else if(day == "Monday" && (month == "November" || month == "December"))
    {
        finalAmount = (5.0/100.0) * amount;
        finalAmount = amount - finalAmount;
    }
    else 
    {
        finalAmount = amount;
    }

    return finalAmount;
}