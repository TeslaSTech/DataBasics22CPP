/*
Valmik Revankar
Lab 2.2
Mrs. DiGiovanna
10/16/2020
Extra: used printf over cout for formatting output because I thought it fit the bill better
*/


using namespace std;

#include <iostream>
#include <iomanip>

int main() {
	// Setup
	double costOfDances, costOfMighty, costOfSnoring;
	double rentingDances, rentingMighty, rentingSnoring;
	const char separator = ' ';
	const int nameWidth = 8;
	const int costWidth = 13;
	const int renterWidth = 10;

	// Take in values from the user
	cout << "How much is Dances?\t";
	cin >> costOfDances;
	if (abs(costOfDances) != costOfDances) {
		while (abs(costOfDances) != costOfDances) {
			cout << "That's a negative number. How much is Dances?\t";
			cin >> costOfDances;
		}
	}
	cout << "How many people are renting Dances? \t";
	cin >> rentingDances;
	if (floor(rentingDances) != rentingDances) {
		while (floor(rentingDances) != rentingDances) {
			cout << "Invalid value entered. How many people are renting Dances? \t";
			cin >> rentingDances;
		}
	}
	cout << "How much is Mighty?\t";
	cin >> costOfMighty;
	if (abs(costOfMighty) != costOfMighty) {
		while (abs(costOfMighty) != costOfMighty) {
			cout << "That's a negative number. How much is Mighty?\t";
			cin >> costOfMighty;
		}
	}
	cout << "How many people are renting Mighty? \t";
	cin >> rentingMighty;
	if (floor(rentingMighty) != rentingMighty) {
		while (floor(rentingMighty) != rentingMighty) {
			cout << "Invalid value entered. How many people are renting Mighty? \t";
			cin >> rentingMighty;
		}
	}
	cout << "How much is Snoring?\t";
	cin >> costOfSnoring;
	if (abs(costOfSnoring) != costOfSnoring) {
		while (abs(costOfSnoring) != costOfSnoring) {
			cout << "That's a negative number. How much is Snoring?\t";
			cin >> costOfSnoring;
		}
	}
	cout << "How many people are renting Snoring? \t";
	cin >> rentingSnoring;
	if (floor(rentingSnoring) != rentingSnoring) {
		while (floor(rentingSnoring) != rentingSnoring) {
			cout << "Invalid value entered. How many people are renting Snoring? \t";
			cin >> rentingSnoring;
		}
	}

	cout << "\n" << endl; // Spacing

	// Check if the values are legitimate.
	if (costOfDances < 0 || rentingDances < 0 || costOfMighty < 0 || rentingMighty < 0 || costOfSnoring < 0 || rentingSnoring < 0) {
		cout << "Invalid value provided for one of the inputs." << endl;
		exit(-1);
	}

	// Here is my extra: I used printf for more compact, more readable formatting than what cout and std::setprecision() offer
	printf("%-15s %-16s %-16s \n", "Video Title", "Cost", "# renting");
	printf("%-15s $%-15.2f %-15i \n", "Dances", costOfDances, rentingDances);
	printf("%-15s $%-15.2f %-15i \n", "Mighty", costOfMighty, rentingMighty);
	printf("%-15s $%-15.2f %-15i \n", "Snoring", costOfSnoring, rentingSnoring);

	cout << "\n" << endl; // Spacing

	double totalValue = (costOfDances * rentingDances) + (costOfMighty * rentingMighty) + (costOfSnoring * rentingSnoring);
	double averageValue = totalValue / ((long) rentingDances + (long) rentingMighty + (long) rentingSnoring); // they are (long) to prevent overflow [VS yelled at me]

	// Printing out our newly calculated values
	printf("The total value of all rentals is: $%.2f\n", totalValue);
	printf("The average value is: $%.2f\n", averageValue);
}