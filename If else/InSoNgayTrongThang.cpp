#include <iostream>
using namespace std;

int main() {
	int month;
	cout << "Nhap thang can xem ngay: ";
	cin >> month;
	
	if ((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10) || (month == 12)) {
		cout << "Co 31 ngay";
	}
	else if ((month == 4) || (month == 6) || (month == 9) || (month == 1)) {
		cout << "Co 30 ngay";
	}
	else {
		int year;
		cout << "Nhap nam cua cac thang can xem: ";
		cin >> year;

		if (year % 400 == 0) {
			cout << "Co 29 ngay ";
		}
		else {
			if ((year % 4 == 0) && (year % 100 != 0)) {
				cout << "Co 29 ngay";
			}
			else {
				cout << "Co 28 ngay";
			}
		}
	}
}
