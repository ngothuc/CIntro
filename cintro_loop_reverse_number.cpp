#include<stdio.h>
#include<string.h>

#define loop(i, a, b) for(int i = a; i <= b; i++)
#define loopdown(i, a, b) for(int i = a; i >= b; i--)
#define N 1000001

char num[100];

int main() {
	//freopen("ngothuc.txt", "r", stdin);

	scanf("%s", num);
	loopdown(i, strlen(num)-1, 0) {
		printf("%c", num[i]);
	}

	return 0;
}
