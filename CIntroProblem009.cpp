#include<stdio.h>

#define loop(i, a, b) for(int i = a; i <= b; i++)
#define loopdown(i, a, b) for(int i = a; i >= b; i--)
#define N 1000001

int h1, h2, m1, m2;

int compare(int h1, int m1, int h2, int m2) {
    if(h1 < h2) return -1;
    if(h1 == h2) {
        if(m1 == m2) return 0;
        if(m1 < m2) return -1;
        if(m1 > m2) return 1;
    }
    return 1;
}

int main() {
	freopen("ngothuc.txt", "r", stdin);

    int res;

    scanf("%d:%d %d:%d", &h1, &m1, &h2, &m2);
    
    int c = compare(h2, m2, h1, m1);
    if(c == 1) {
        c = compare(h2, m2, 18, 0);
        if(c >= 0) res = 8000;
        else res = 5000;
    }else if(c == 0) res = 0;
    else res = -1;

    printf("%d", res);

	return 0;
}