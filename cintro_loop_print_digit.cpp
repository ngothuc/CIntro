#include<stdio.h>
#include<string.h>

#define loop(i, a, b) for(int i = a; i <= b; i++)
#define loopdown(i, a, b) for(int i = a; i >= b; i--)
#define N 1000001

char* str[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
char num[100];

int main() {
	//freopen("ngothuc.txt", "r", stdin);

	scanf("%s", num);
	loop(i, 0, strlen(num)-1) {
		printf("%s ", str[num[i]-48]);
	}

	return 0;
}
