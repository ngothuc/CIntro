#include<stdio.h>
#include<string.h>

#define loop(i, a, b) for(int i = a; i <= b; i++)
#define loopdown(i, a, b) for(int i = a; i >= b; i--)
#define N 1000001

char str[50];

int main() {
	freopen("ngothuc.txt", "r", stdin);

	double point = 0;
	double max_point = -2;
	
	while(1) {
		scanf("%s", str);
		if(strcmp(str, "E") == 0) break;
		loop(i, 0, strlen(str)-1) {
			if(str[i] == '+') point += 0.25;
			else if(str[i] == '-') point -= 0.25;
		}
		if(point > max_point && point <=2) max_point = point;
		point = 0;
	}
	
	printf("%.2lf", max_point);

	return 0;
}
