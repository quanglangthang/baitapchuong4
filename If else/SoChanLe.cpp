#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	if (n % 2 == 0) {
		cout << n << " la so chan";
	}
	else {
		cout << n << " la so le";
	}
}
