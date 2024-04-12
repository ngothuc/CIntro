#include<stdio.h>

#define loop(i, a, b) for(int i = a; i <= b; i++)
#define loopdown(i, a, b) for(int i = a; i >= b; i--)
#define N 1000001
#define MAX_MONEY 5000000

int x[4];
int y[4] = {500000, 200000, 100000, 50000};

int money;
int sum = 0;
int cnt = 0;

int Check(int v) {
	return 1;
}

void Solution() {
	if(sum == money) cnt++;
}

void Try(int k) {
	loop(i, 0, money/y[k]) {
		if(Check(i)) {
			x[k] = i;
			sum += y[k] * x[k];
			if(k == 3) Solution();
			else Try(k+1);
			sum -= y[k] * x[k];
		}
	}
}

int main() {
	scanf("%d", &money);
	if(money > MAX_MONEY) {
		printf("%d", cnt);
		return 0;
	}
	Try(0);
	printf("%d", cnt);
	return 0;
}
