#include<stdio.h>
#include<string.h>

char str[100];
int res = 1;

int main() {
	fgets(str, 100, stdin);
	int n = strlen(str) - 2;
	//printf("%d\n", n);
	for(int i = 0; i < n / 2; i++) {
		if(str[i] != str[n-i]) {
			res = 0;
			break;
		}
	}
	printf("%d", res);
	return 0;
}
