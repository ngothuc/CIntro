#include<stdio.h>

#define loop(i, a, b) for(int i = a; i <= b; i++)
#define loopdown(i, a, b) for(int i = a; i >= b; i--)
#define N 1000001

double v, n, k;
int checkV(double v) {
	double value[4] = {5400, 7200, 10000, 15000};
	loop(i, 0, 3) {
		if(v == value[i]) return 1;
	}
	return 0;
}

int checkN(double n) {
	return (n >= 50) && (n <= 256);
}

int checkK(double k) {
	return k >= 512 && k <= 4 * 1024;
}

int main() {
	freopen("ngothuc.txt", "r", stdin);

    scanf("%lf %lf %lf %lf", &v, &n, &k);
    
    if(!checkV(v) || !checkN(n) || !checkK(k)) {
    	printf("-1");
    	return 0;
	}
    printf("%.2lf", v*n*k/1024/1024);

	return 0;
}
