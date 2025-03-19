/* File Name: Exam-1
Programmer/Name: Christopher Wilson
Date: 3/19/2025
*/

#include <iostream>
#include <iomanip>

using namespace std;

double getCommissionRate(double sales) {
	if (sales < 10000) return 0.05;
	else if (sales < 15000) return 0.10;
	else if (sales < 18000) return 0.12;
	else if (sales < 22000) return 0.14;
		return sales * 0.16;
}

int main() {
	double sales, advancePay, commissionRate, commission, remainingPay;

	cout << "Enter the salesperson's monthly sales: ";
	cin >> sales;

	commissionRate = getCommissionRate(sales);

	commission = sales * commissionRate;

	cout << "Enter the amount of advanced pay for this salesperson: ";
	cin >> advancePay;

	remainingPay = commission - advancePay;

	cout << "\nPay Results" << endl;
	cout << "-------------" << endl;
	cout << fixed << setprecision(2);
	cout << "Sales: $" << sales << endl;
	cout << "Commission Rate: " << commissionRate << endl;
	cout << "Commission: $" << commission << endl;
	cout << "Advanced Pay: $" << advancePay << endl;

	if (remainingPay >= 0) {
		cout << "Remaining Pay: $" << remainingPay << endl;
	} else {
		cout << "The salesperson must reimburse Crazy Al's: $" << -remainingPay << endl;
	}
	return 0;
}