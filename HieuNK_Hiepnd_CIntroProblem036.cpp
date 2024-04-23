#include<stdio.h>
#include<string.h>

#define loop(i, a, b) for(int i = a; i <= b; i++)
#define loopdown(i, a, b) for(int i = a; i >= b; i--)
#define N 1000001

char str[N];
int mark[3] = {1, 1, 1};
int cs[3] = {2, 8, 10};

int main() {
	freopen("ngothuc.txt", "r", stdin);

    scanf("%s", str);
    loop(i, 0, strlen(str)-1) {
        if(str[i] >= '2') mark[0] = 0;
        if(str[i] >= '8') mark[1] = 0;
        if (str[i] < '0' || str[i] > '9') mark[2] = 0;        
    }
    loop(i, 0, 2) {
        if(mark[i]) printf("%d ", cs[i]);
    }

	return 0;
}