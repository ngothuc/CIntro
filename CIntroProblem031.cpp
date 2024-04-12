#include<stdio.h>
#include<string.h>

char str[100];

int main() {
	//freopen("ngothuc.txt", "r", stdin);
	fgets(str, 100, stdin);
	if((str[0] != '8') || (str[1] != '9') || (str[2] != '3')) {
		printf("0");
		return 0;
	}
	int sum = 0;
	for(int i = 1; i < 12; i+=2) {
		sum += 3 * (int)str[i];
	}
	for(int i = 0; i < 12; i+=2) {
		sum += (int)str[i];
	}
	sum += (int)str[12];
	if(sum % 10 == 0) {
		printf("1");
	}else printf("0");
	//printf("%d", sum);
	return 0;
}
