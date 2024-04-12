#include<stdio.h>

#define loop(i, a, b) for(int i = a; i <= b; i++)
#define loopdown(i, a, b) for(int i = a; i >= b; i--)
#define N 1000001

int day, month;
int dom[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
	freopen("ngothuc.txt", "r", stdin);
	scanf("%d %d", &day, &month);
	
	int ok = 1;
	for(int i = day+7; i <= dom[month]; i+=7) {
		printf("%d ", i);
		ok = 0;
	}
	if(ok) printf("0");

	return 0;
}
