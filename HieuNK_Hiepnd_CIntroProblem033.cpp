#include<stdio.h>
#include<string.h>

#define loop(i, a, b) for(int i = a; i <= b; i++)
#define loopdown(i, a, b) for(int i = a; i >= b; i--)
#define N 101

int kim = 1, moc = 2, thuy = 3, hoa = 4, tho = 5;

int num[10] = {3, 3, 5, 2, 2, 5, 1, 1, 5, 4 };
char str[N];
int menh;

int tuongSinh(int menh) {
    if(menh == thuy) return kim;
    if(menh == moc) return thuy;
    if(menh == hoa) return moc;
    if(menh == tho) return hoa;
    if(menh == kim) return tho;
}

int tuongKhac(int menh) {
    if(menh == thuy) return tho;
    if(menh == moc) return kim;
    if(menh == hoa) return thuy;
    if(menh == tho) return moc;
    if(menh == kim) return hoa;
}

int main() {
	freopen("ngothuc.txt", "r", stdin);
    scanf("%s", str); scanf("%d", &menh);
    int tuongsinh = tuongSinh(menh);
    int tuongkhac = tuongKhac(menh);
    int ok = 0;
    loop(i, 1, strlen(str) - 1) {
        char c = str[i] - 48;
        if(num[c] == tuongkhac) {
            ok = 0;
            break;
        }
        if(num[c] == tuongsinh) ok = 1;
    }
    printf("%d", ok);
    return 0;
}
