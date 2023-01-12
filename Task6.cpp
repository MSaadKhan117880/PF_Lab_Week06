#include<iostream>
using namespace std;

float lowestPrice(int, string);

int main()
{
    int km;
    string timeOfDay;
    float lowest_price;

    cout << "Enter the distance you want to travel: ";
    cin >> km;
    cout << "Enter the Time of the Day: ";
    cin >> timeOfDay;

    lowest_price = lowestPrice (km, timeOfDay);
    cout << "The lowest price = " << lowest_price << endl;
    return 0;
}

float lowestPrice (int km, string timeOfDay)
{
    float lowest_price;
    if(km < 20 )
    {
        if (timeOfDay == "Day")
        {
            lowest_price = (km * 0.79) + 0.70;
        }
        else
        {
            lowest_price = (km * 0.90) + 0.70;
        }
    }
    else if (km < 100)
    {
        lowest_price = km * 0.09;
    }
    else if (km >= 100)
    {
        lowest_price = km * 0.06;
    }

    return lowest_price;
}