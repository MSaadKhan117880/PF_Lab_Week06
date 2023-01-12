#include<iostream>
using namespace std;

float Budget(float, string, int);

int main()
{
	float budget;
	string ticket_type;
	int persons;
	float budget_left;
	
	cout << "Enter Your Total Budget: ";
	cin >> budget;
	cout << "Enter Your Ticket Type: ";
	cin >> ticket_type;
	cout << "Enter Number of Persons: ";
	cin >> persons;

	budget_left = Budget(budget, ticket_type, persons);

	if (budget_left > 0)
	{
		cout << "Yes! You have " << budget_left << " QR left" << endl;
	}
	else
	{
		cout << "Not enough Money! You need " << -(budget_left) << " QR" << endl;
	}

	return 0;
}

float Budget(float budget, string type, int persons)
{
	float budget_left;
	float total_budget;
	if (type == "Normal")
	{
		if (persons <= 4)
		{
			budget_left = budget * (75.0 / 100.0);
			budget_left = budget - budget_left;
		}
		else if (persons <= 9)
		{
			budget_left = budget * (60.0 / 100.0);
			budget_left = budget - budget_left;
		}
		else if (persons <= 24)
		{
			budget_left = budget * (50.0 / 100.0);
			budget_left = budget - budget_left;
		}
		else if (persons <= 49)
		{
			budget_left = budget * (40.0 / 100.0);
			budget_left = budget - budget_left;
		}
		else
		{
			budget_left = budget * (25.0 / 100.0);
			budget_left = budget - budget_left;
		}
		total_budget = persons * 249.99;
	}
	else if (type == "VIP")
	{
		if (persons <= 4)
		{
			budget_left = budget * (75.0 / 100.0);
			budget_left = budget - budget_left;
		}
		else if (persons <= 9)
		{
			budget_left = budget * (60.0 / 100.0);
			budget_left = budget - budget_left;
		}
		else if (persons <= 24)
		{
			budget_left = budget * (50.0 / 100.0);
			budget_left = budget - budget_left;
		}
		else if (persons <= 49)
		{
			budget_left = budget * (40.0 / 100.0);
			budget_left = budget - budget_left;
		}
		else
		{
			budget_left = budget * (25.0 / 100.0);
			budget_left = budget - budget_left;
		}
		total_budget = persons * 499.99;
	}

	total_budget = budget_left - total_budget;

	return total_budget;
}