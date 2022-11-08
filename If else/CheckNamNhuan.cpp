#include <iostream>
using namespace std;

int main() {
	int year;
	cout << "Nhap vao nam can kiem tra: ";
	cin >> year;
	if (year % 400 == 0) {
		cout << "Nam nhuan";
	}
	else {
		if ((year % 4 == 0) && (year % 100 != 0)) {
			cout << "Nam nhuan";
		}
		else {
			cout << "Nam khong nhuan";
		}
	}
}
