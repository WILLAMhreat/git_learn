#include<stdio.h>
int check(int n) {
	while (n > 0) {
		if (n % 10 == 2||n%10==4) {
			return 0;
		}
		n /= 10;
	}
	return 1;
}
int main() {
	int answer = 0;
	for (int i = 1; i < 2019; i++) {
		for (int j = 1; j < 2019; j++) {
			for (int k = 1; k < 2019; k++) {
				if (i + j + k == 2019&&i!=j&&i!=k&&j!=k) {
					if (check(i) && check(j) && check(k)) {
						answer++;
					}
				}
			}
		}
	}
	printf("%d", answer/6);//40785
}
