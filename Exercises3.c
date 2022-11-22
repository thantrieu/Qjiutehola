/**
* @author Branium Academy
* @version 2022.11.22
* @see https://braniumacademy.net
*/

#include <stdio.h>
#include <math.h>

// hàm tính tổng các chữ số của n
int sumOfDigits(int n) {
	int sum = 0; // giả định ban đầu tổng bằng 0
	while (n > 0) { // chừng nào các chữ số của n còn chưa tách hết
		sum += n % 10; // tách lấy chữ số phần đơn vị
		n /= 10; // giảm n đi 10 lần để loại bỏ phần đơn vị
	}
	return sum;
}

// hàm kiểm tra số nguyên tố. giả định hàm kiểm tra sẽ trả về:
// 0: n không phải nguyên tố
// 1: n là số nguyên tố
int isPrime(int n) {
	if (n < 2) { // mọi số nguyên nhỏ hơn 2 không phải số ng.tố
		return 0;
	}
	// nếu n lớn hơn bằng 2, xét tiếp.
	// nếu n có ước thì ta luôn tìm được ước số trong đoạn từ 2 đến phần nguyên căn bậc hai của n
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) { // nếu n có ước khác 1 và chính nó
			return 0; // tất nhiên n không thể là số nguyên tố
		}
	}
	return 1; // mặc định là số nguyên tố
}

// hàm kiểm tra n có phải là số thuận nghịch
// trả về 1 nếu đúng là thuận nghịch và 0 trong trường hợp ngược lại
int isReversible(int n) {
	int m = n; // lưu lại giá trị gốc của n trước
	int r = 0; // giá trị n đảo ngược ban đầu
	while (m > 0) { // đảo ngược thứ tự các chữ số của n
		r = r * 10 + m % 10;
		m /= 10;
	}
	return r == n; // nếu r == n thì return 1 và 0 nếu ngược lại
}

int main() {
	int n;
	printf("Nhap so nguyen n: ");
	scanf("%d", &n);
	if (n > 0) {
		int sum = sumOfDigits(n);
		printf("Tong cac chu so cua %d: %d\n", n, sum);

		if (isPrime(n)) {
			printf("%d la so nguyen to.\n", n);
		}
		else {
			printf("%d khong la so nguyen to.\n", n);
		}

		if (isReversible(n)) {
			printf("%d la so thuan nghich.\n", n);
		}
		else {
			printf("%d khong la so thuan nghich.\n", n);
		}
	}
	else {
		puts("Nhap so nguyên n > 0.");
	}
	return 0;
}