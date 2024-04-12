#include<stdio.h>
#include<limits.h>

#define loop(i, a, b) for(int i = a; i <= b; i++)
#define loopdown(i, a, b) for(int i = a; i >= b; i--)
#define N 1000001

double a[N];

double Max = INT_MIN;
double Min = INT_MAX;

int main() {
	freopen("ngothuc.txt", "r", stdin);
	
	int cnt = 1;
	while(1) {
		scanf("%lf", a+cnt);
		if(a[cnt] == -1) break;
		if(a[cnt] > Max) Max = a[cnt];
		if(a[cnt] < Min) Min = a[cnt];
		cnt++;
	}
	
	if(cnt == 1) printf("-1 -1 -1 -1");
	else printf("%.2lf %.2lf %.2lf %.2lf", a[1], a[cnt-1], Max, Min);

	return 0;
}
