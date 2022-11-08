#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cout << "Nhap vao 3 goc: ";
	cin >> a >> b >> c;
	if ((a+b+c == 180)) {
		cout << "la tam giac";
	}
	else {
		cout << "Ko phai tam giac";
	}
}
