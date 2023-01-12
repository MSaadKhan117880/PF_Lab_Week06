#include<iostream>
using namespace std;

float totalIncome (string, int, int);

int main()
{
    string screen;
    int rows;
    int columns;
    float total_income;

    cout << "Enter the name of Screen: ";
    cin >> screen;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> columns;

    total_income = totalIncome (screen, rows, columns);
    cout << "Total Income of the Cinema = " << total_income << endl;
    return 0;
}

float totalIncome (string screen , int rows , int columns)
{
    float total_income;
    if (screen == "Premiere")
    {
        total_income = (rows * columns) * 12.00;
    }
    else if (screen == "Normal")
    {
        total_income = (rows * columns) * 7.50;
    }
    else
    {
        total_income = (rows * columns) * 5.00;
    }

    return total_income;
}