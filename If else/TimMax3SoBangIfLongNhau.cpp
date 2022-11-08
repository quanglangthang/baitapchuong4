#include <iostream>
using namespace std;

int main() {
	int a, b, c, max;
	cout << "Nhap 3 so a,b,c: ";
	cin >> a >> b >> c;
	if (a > b) {
		if (b > c) {
			max = a;
		}
		else {
			if (a > c) {
				max = a;
			}
		}
	}
	else if (a < b) {
		if (b < c) {
			max = c;
		}
		else {
			max = b;
		}
	}
	else {
		if (c > a) {
			max = b;
		}
		else {
			if (b > a) {
				max = b;
			}
			else {
				max = a;
			}
		}
	}
	cout << max;
}
