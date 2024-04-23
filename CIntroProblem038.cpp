#include<stdio.h>

#define loop(i, a, b) for(int i = a; i <= b; i++)
#define loopdown(i, a, b) for(int i = a; i >= b; i--)
#define N 1000001

double height;
double totalPrice = 0;

int main() {
	//freopen("ngothuc.txt", "r", stdin);

	while(1) {
		scanf("%lf", &height);
		if(height == 0) break;
		else if(height > 1.3) totalPrice+=30000;
		else if(height <= 1.3) totalPrice+=20000;
	}
	
	printf("%.0lf", totalPrice);

	return 0;
}
