#include <iostream>
using namespace std;

// Hien thi bao nhieu ngay trong thang
void showDateInMonth(int date) {
	if ((date == 1) || (date == 3) || (date == 5) || (date == 7) || (date == 8) || (date == 10) || (date == 12)) {
		cout << "Co 31 ngay";
	}
	else if ((date == 4) || (date == 6) || (date == 9) || (date == 1)) {
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

// In ten ngay trong tuan bang so nguyen duong 1-7
void showWeek(int week) {
	switch (week) {
	case 1:
		cout << "Chu nhat";
		break;
	case 2:
		cout << "Thu 2";
		break;
	case 3:
		cout << "Thu 3";
		break;
	case 4:
		cout << "Thu 4";
		break;
	case 5:
		cout << "Thu 5";
		break;
	case 6:
		cout << "Thu 6";
		break;
	case 7:
		cout << "Thu 7";
		break;
	default:  
		cout << "Loi";
		break;
	}		  
}

// Tinh tong, hieu, thuong, tich
void sumSubMulDiv(int a, int b) {
	cout << "Tong: " << a + b << endl;
	cout << "Hieu: " << a - b << endl;
	cout << "Tich: " << a * b << endl;
	cout << "Thuong: " << (float)a / b << endl;
}

// Kiem tra so chan hoac le
void checkChanLe(int a) {
	if (a % 2 == 0) {
		cout << a << " La so chan";
	}
	else {
		cout << a << " La so le";
	}
}

// Kiem tra nguyen am, phu am
void checkVowelsAndConsonants(char kt){
	if ((kt >= 'a') && (kt <= 'z')) {
		if ((kt == 'a') || (kt == 'e') || (kt == 'o') || (kt == 'i') || (kt == 'u')) {
			cout << kt << " la nguyen am";
		}
		else {
			cout << kt << " la phu am";
		}
	}
}

// In gioi tinh Nam/Nu bang M/F
void showSex(char sex) {
	if ((sex == 'm') || (sex == 'M')) {
		cout << "Gioi tinh Nam";
	}
	else if ((sex == 'f') || (sex == 'F')) {
		cout << "Gioi tinh Nu";
	}
	else {
		cout << "Chi duoc nhap m(M)/f(F)";
	}
}

// So sanh 3 so
void soSanhBaSo(int a, int b, int c) {
	int max;
	if (a > b) {
		max = a;
	}
	else {
		max = b;
	}
	if (max < c) {
		max = c;
	}
}

int main() {
	int n;
	cout << "0. Thoat chuong trinh" << endl;
	cout << "1. Hien thi ngay thang trong nam." << endl;
	cout << "2. In ra so ngay trong tuan." << endl;
	cout << "3. Tinh tong, hieu, thuong, tich." << endl;
	cout << "4. Kiem tra chan le." << endl;
	cout << "5. Kiem tra nguyen am, phu am." << endl;
	cout << "6. Tim so lon nhat trong 3 so." << endl;
	cout << "7. Kiem tra gioi tinh." << endl;
	cout << "Vui long nhap lua chon cua ban: ";
	cin >> n;
	switch (n) {
	case 0:
		cout << "Da thoat ra khoi chuong trinh";
		exit(0);


	case 1:
		int date;
		cout << "Chuong trinh hien thi ngay trong thang cua nam: " << endl;
		cout << "Nhap thang trong nam: ";
		cin >> date;
		showDateInMonth(date);
		break;


	case 2:
		int week;
		cout << "Chuong trinh in ra so ngay trong tuan" << endl;
		cout << "Nhap so (1-7): ";
		cin >> week;
		showWeek(week);
		break;

	case 3:
		int st1, st2;
		cout << "Chuong trinh tinh tong, hieu, thuong, tich" << endl;
		cout << "Nhap 2 so a, b: ";
		cin >> st1 >> st2;
		sumSubMulDiv(st1, st2);
		break;

	case 4:
		int so;
		cout << "Chuong trinh kiem tra so chan le" << endl;;
		cout << "Nhap so can kiem tra: ";
		cin >> so;
		checkChanLe(so);
		break;

	case 5:
		char kt;
		cout << "Chuong trinh kiem tra nguyen am phu am" << endl;
		cout << "Nhap vao ki tu can kiem tra: ";
		cin >> kt;
		checkVowelsAndConsonants(kt);
		break;

	case 6:
		int a, b, c;
		cout << "Chuong trinh so sanh 3 so." << endl;
		cout << "Nhap 3 so a, b, c: ";
		cin >> a >> b >> c;
		soSanhBaSo(a, b, c);
		break;

	case 7:
		char sex;
		cout << "Chuong trinh kiem tra gioi tinh." << endl;
		cout << "Nhap vao m(M)/f(F): ";
		cin >> sex;
		showSex(sex);
		break;

	default:
		cout << "Cu phap khong hop le.";
	}
}