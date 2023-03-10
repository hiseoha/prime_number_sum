#include <stdio.h>

int main(){
	int i;
	int sum = 0;

	for (i = 2; i <= 100; i++) {
		sum += prime(i);
	}
	printf("1부터 100까지의 숫자 중 소수의 합: %d", sum);
}

int prime(int num) {
	int j;
	for (j = 2; j <= num; j++) {
		if (num % j == 0) {
			if (num == j) return num;
			if (num != j) return 0;
		}
	}
}