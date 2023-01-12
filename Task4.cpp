#include<iostream>
using namespace std;

string checkSpeed (float);

int main()
{
    float speed;
    string meter;

    cout << "Enter the Speed: ";
    cin >> speed;

    meter = checkSpeed (speed);
    cout << "You are going at " << meter << endl;

    return 0;
}

string checkSpeed (float speed)
{
    string speedometer;

    if (speed <= 10)
    {
        speedometer = "Slow Speed ";
    }
    else if (speed <= 50)
    {
        speedometer = "Average Speed ";
    }
    else if (speed <= 150)
    {
        speedometer = "Fast Speed ";
    }
    else if (speed <= 1000)
    {
        speedometer = "Ultra-Fast Speed ";
    }
    else 
    {
        speedometer = "Extremely Fast Speed ";
    }

    return speedometer;
}