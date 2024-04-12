#include<stdio.h>

#define loop(i, a, b) for(int i = a; i <= b; i++)
#define loopdown(i, a, b) for(int i = a; i >= b; i--)
#define N 1000001

int n;
double a[N];
int ans = 0;

int main() {
	freopen("ngothuc.txt", "r", stdin);

	scanf("%d", &n);
	loop(i, 1, n) {
		scanf("%lf", a+i);
		if(a[i] > 7) ans++;
	}
	printf("%d", ans);

	return 0;
}
