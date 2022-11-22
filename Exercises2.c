/**
* @author Branium Academy
* @version 2022.11.22
* @see https://braniumacademy.net
*/
#include <stdio.h>

// hàm đọc và trả về một số nguyên nhập vào từ bàn phím
int readANumber(int index) {
	int n; // biến lưu giá trị số nguyên
	printf("Nhap vao so nguyen thu %d: ", index);
	scanf("%d", &n);
	return n;
}

// tìm UCLN hai số nguyên dương
int gcd(int a, int b) { // greatest common divisor
	while (a != b) {
		if (a > b) {
			a -= b;
		}
		else {
			b -= a;
		}
	}
	// sau vòng lặp thì giá trị của a và b là như nhau
	// nên ta return biến nào trong hai biến a, b đều được.
	// lưu ý không phiên dịch return là quay về => củ chuối và tối nghĩa.
	// return ở đây là trả về 1 kết quả cho nơi thực hiện lời gọi tới hàm gcd() này
	// dưới đây chúng ta trả về giá trị ước chung lớn nhất của hai số a, b.
	return a;
}

// tìm bội chung nhỏ nhất của hai số nguyên a, b
// bội chung nhỏ nhất chính là tích hai số chia cho ước chung lớn nhất của chúng
// hiểu đơn giản là mẫu số chung càng lớn thì bội số càng nhỏ.
int lcm(int a, int b) { // least common multiple
	int product = a * b;
	int gcdValue = gcd(a, b);
	return product / gcdValue;
}

int main() {
	int a = readANumber(1); // gọi hàm nhập số a
	int b = readANumber(2); // gọi hàm nhập số b
	if (a > 0 && b > 0) {
		int ucln = gcd(a, b); // tìm ước chung max
		int bcnn = lcm(a, b); // tìm bội chung min
		printf("UCLN(%d, %d) = %d\n", a, b, ucln);
		printf("BCNN(%d, %d) = %d\n", a, b, bcnn);
	}
	else {
		puts("Vui long nhap a, b > 0");
	}
	return 0;
}