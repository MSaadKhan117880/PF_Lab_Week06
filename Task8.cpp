#include<iostream>
using namespace std;

float Calculatebill(string, string, int);

int main()
{
	string city_name;
	string product_name;
	int quantity;
	float total_bill;

	cout << "Enter the name of the city: ";
	cin >> city_name;
	cout << "Enter the product name: ";
	cin >> product_name;
	cout << "Enter the quantity of the Product: ";
	cin >> quantity;

	total_bill = Calculatebill(city_name, product_name, quantity);
	if (total_bill == 0)
	{
		cout << "Invalid Input!" << endl;
	}
	else
	{
		cout << "The Total Bill is " << total_bill << endl;
	}

	return 0;
}

float Calculatebill (string city, string product, int quantity)
{
	float total_bill;
	if (product == "coffee")
	{
		if (city == "Sofia")
		{
			total_bill = 0.50 * quantity;
		}
		else if (city == "Plovdiv")
		{
			total_bill = 0.40 * quantity;
		}
		else if (city == "Varna")
		{
			total_bill = 0.45 * quantity;
		}
	}
	else if (product == "water")
	{
		if (city == "Sofia")
		{
			total_bill = 0.80 * quantity;
		}
		else if (city == "Plovdiv")
		{
			total_bill = 0.70 * quantity;
		}
		else if (city == "Varna")
		{
			total_bill = 0.70 * quantity;
		}
	}
	else if (product == "beer")
	{
		if (city == "Sofia")
		{
			total_bill = 1.20 * quantity;
		}
		else if (city == "Plovdiv")
		{
			total_bill = 1.15 * quantity;
		}
		else if (city == "Varna")
		{
			total_bill = 1.10 * quantity;
		}
	}
	else if (product == "sweets")
	{
		if (city == "Sofia")
		{
			total_bill = 1.45 * quantity;
		}
		else if (city == "Plovdiv")
		{
			total_bill = 1.30 * quantity;
		}
		else if (city == "Varna")
		{
			total_bill = 1.35 * quantity;
		}
	}
	else if (product == "peanuts")
	{
		if (city == "Sofia")
		{
			total_bill = 1.60 * quantity;
		}
		else if (city == "Plovdiv")
		{
			total_bill = 1.50 * quantity;
		}
		else if (city == "Varna")
		{
			total_bill = 1.55 * quantity;
		}
	}
	else
	{
		total_bill = 0;
	}
	return total_bill;
}