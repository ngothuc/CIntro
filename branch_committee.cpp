#include<stdio.h>

int main() {
	double a, b, c, d, e;
	
	freopen("ngothuc.txt", "r", stdin);
	
	scanf("%lf %lf %lf %lf %lf", &a, &b, &c, &d, &e);
	
	if(c < 5 || d < 5 || e < 5) {
		printf("Fail");
		return 0;
	}
	
	printf("%.1lf %.1lf", (a+b)/2, (c+d+e)/3);
	
	return 0;
}
