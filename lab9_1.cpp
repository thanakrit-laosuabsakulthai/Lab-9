#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	//Declare variables
	double initial_loan, interest_rate, annual_payment;

	cout << "Enter initial loan: ";
	cin >> initial_loan;
	cout << "Enter interest rate per year (%): ";
	cin >> interest_rate;
	cout << "Enter amount you can pay per year: ";
	cin >> annual_payment;
	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";

	//Calculate and display table of amortization schedule year by year
	int year = 1;
	double prev_balance = initial_loan;
	while (prev_balance > 0) {
		double interest = prev_balance * (interest_rate / 100.0);
		double total = prev_balance + interest;
		double payment = (total < annual_payment) ? total : annual_payment;
		double new_balance = total - payment;
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << year; 
		cout << setw(13) << left << prev_balance; 
		cout << setw(13) << left << interest; 
		cout << setw(13) << left << total;
		cout << setw(13) << left << payment;
		cout << setw(13) << left << new_balance;
		cout << "\n";

		prev_balance = new_balance;
		year++;
	}
	/*
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << 1; 
	cout << setw(13) << left << 1000.0;
	cout << setw(13) << left << 50.0;
	cout << setw(13) << left << 1050.0;
	cout << setw(13) << left << 100.0;
	cout << setw(13) << left << 950.0;
	cout << "\n";	
	*/
	return 0;
}
