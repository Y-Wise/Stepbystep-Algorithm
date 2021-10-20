#include<iostream>

// 8-1단계 1712번 손익분기점
void BreakEvenPoint()
{
	// 21억 이하 자연수
	// 고정 비용 A, 가변 비용 B, 노트북 C만원
	int a{}, b{}, c{}; 
	
	std::cin >> a >> b >> c;
	int num; // 노트북 개수 = a / (c - b);

	/* 손익분기점
	총수익 > 총비용이 최초로 발생하는 지점
	수익 = c * num;
	비용 = a + (b * num);
	(c-b) * num > a;
	num > a/(c-b);
	*/

	if (c - b <= 0) {
		num = -1;
	}
	else {
		num = a / (c - b) +1;
	}

	std::cout << num;
}

// 8-2단계 2292번 벌집
int SumHoney(int n) {
	int sum = 2 + 3 * (n - 1) * (n - 2);
	return sum;
}
void Honeycomb() {
	// 1 7 19 37 61
	// 	   6 12 18 24
	// 1 + 6∑(n-1)
	// 1 + 3(n-1)n-6(n-1) = numN = 1+3(n-1)(n-2)


	// 1 2 8 20 38 ..
	// +1 6 12 18 ..  6(k-1)
	// n=1: 1
	// n>1: 2+∑6(k-1)
	//		=2+3(n-1)(n-2)


	int k{};
	int n{};
	std::cin >> n;
	if (n == 1) {
		k = 1;
	}
	else {
		k = 2;
		while (true) {
			if (n >= SumHoney(k) && n < SumHoney(k + 1)) {
				break;
			}
			else {
				k++;
			}
		}
	}
	std::cout << k;
}

int main() {
	Honeycomb();
}
