#include<iostream>
#include<cmath>
using namespace std;

int NoOfPlays(string, int, int);

int main()
{
	string year_type;
	int noOfHolidays;
	int noOfWeekends;
	int total_days;

	cout << "Enter Type of year: ";
	cin >> year_type;
	cout << "Enter number of Holidays: ";
	cin >> noOfHolidays;
	cout << "Enter number of Weekends: ";
	cin >> noOfWeekends;

	total_days = NoOfPlays(year_type, noOfHolidays, noOfWeekends);
	cout << "Total number of times Vladimir played Volley-ball is " << total_days << endl;

	return 0;
}

int NoOfPlays(string type, int noOfHolidays, int noOfWeekends)
{
	float total_days;
	float leap_year;
	if (type == "normal")
	{
		total_days = (48.0 * (75.0 / 100.0));
		total_days = total_days + (noOfHolidays * (66.0 / 100.0));
		total_days = ceil(total_days);
	}
	else if (type == "leap")
	{
		total_days = (48.0 * (75.0 / 100.0));
		total_days = total_days + (noOfHolidays * (66.0 / 100.0));
		leap_year = total_days * (15.0 / 100.0);
		total_days = total_days + leap_year;
	}
	return total_days;
}