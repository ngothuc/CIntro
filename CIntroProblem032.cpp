#include<stdio.h>

#define loop(i, a, b) for(int i = a; i <= b; i++)
#define loopdown(i, a, b) for(int i = a; i >= b; i--)
#define N 1000001

double a, b;

int mark[N];

void minusFrac(double x, double y) {
	a = a*y - x*b;
	b = b*y;
}

int main() {
	//freopen("ngothuc.txt", "r", stdin);
	scanf("%lf/%lf", &a, &b);
	
	if(a/b >= 1) {
		printf("-1");
		return 0;
	}
	double i = 2;
	while(a > 0) {
		if(a/b < 1/i) {
			i+=1;
		}else{
			minusFrac(1, i);
			mark[(int)i] = 1;
		}
	}
	loop(i, 1, N) {
		if(mark[i]) printf("1/%d ", i);
	}
	return 0;
}
