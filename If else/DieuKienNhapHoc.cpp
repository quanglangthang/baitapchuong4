#include <iostream>
using namespace std;

int main() {
	int toan, li, hoa, sum;
	cout << "Nhap diem 3 mon toan li hoa: ";
	cin >> toan >> li >> hoa;
	sum = toan + li + hoa;
	if ((toan >= 65) && (li >= 55) && (hoa >= 50)) {
		if (sum >= 160) {
			cout << "Du dieu kien";
		}
		else if ((toan + li) >= 140) {
			cout << "Du dieu kien";
		}
		else if ((toan + hoa) >= 140) {
			cout << "Du dieu kien";
		}
		else {
			cout << "Khong du dieu kien";
		}
	}
	else {
		cout << "Khong du dieu kien";
	}
}
