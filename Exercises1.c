/**
* @author Branium Academy
* @version 2022.11.22
* @see https://braniumacademy.net
*/

#include <stdio.h>

// hàm tính và trả về tổng hai số nguyên
int add(int a, int b) {
	return a + b;
}

// hàm tính và trả về tích a * b
int multilply(int a, int b) {
	return a * b;
}

// hàm tính và trả về hiệu a - b
int substract(int a, int b) {
	return a - b;
}

// hàm chia nguyên a / b;
float divide(int a, int b) {
	return (float)a / b;
}

// hàm lấy số dư
int getRemainder(int a, int b) {
	return a % b;
}

// hàm hiển thị kết quả ở dạng số nguyên
void showIntegerResult(int a, int b, int result, char operator) {
	printf("%d %c %d = %d\n", a, operator, b, result);
}

// hàm hiển thị kết quả ở dạng số thực 
void showRealResult(int a, int b, float result, char operator) {
	printf("%d %c %d = %0.2f\n", a, operator, b, result);
}

// nhập dữ liệu vào và kiểm tra xem tất cả các hàm trên đã hoạt động đúng chưa
int main() {
	int a, b;
	puts("Nhap hai so nguyen a, b: ");
	scanf("%d%d", &a, &b);

	// gọi các hàm đã định nghĩa phía trên:
	int sum = add(a, b); // tính tổng a + b và gán cho sum
	showIntegerResult(a, b, sum, '+'); // hiện kết quả

	int diff = substract(a, b); // tính hiệu a - b và gán cho diff
	showIntegerResult(a, b, diff, '-'); // hiện kết quả

	int product = multilply(a, b); // tính tích a * b và gán cho product
	showIntegerResult(a, b, product, '*'); // hiện kết quả

	if (b == 0) {
		puts("Loi chia cho 0.");
	}
	else {
		int modul = getRemainder(a, b); // lấy phần dư của a chia b
		showIntegerResult(a, b, modul, '%'); // hiện kết quả
	}

	if (b == 0) {
		puts("Loi chia cho 0.");
	} else {
		float quotation = divide(a, b); // tính toán kết quả chia thực tế
		showRealResult(a, b, quotation, '/'); // hiện kết quả
	}

	return 0;
}