#include<stdio.h>
#include<string.h>

#define loop(i, a, b) for(int i = a; i <= b; i++)
#define loopdown(i, a, b) for(int i = a; i >= b; i--)
#define N 1000001

void docso(int digit)
{
    if(digit==0) ;
    else if(digit==1) printf("mot");
    else if(digit==2) printf("hai");
    else if(digit==3) printf("ba");
    else if(digit==4) printf("bon");
    else if(digit==5) printf("nam");
    else if(digit==6) printf("sau");
    else if(digit==7) printf("bay");
    else if(digit==8) printf("tam");
    else if(digit==9) printf("chin");
    else printf("ERROR");
}

int main() {
	freopen("ngothuc.txt", "r", stdin);
    int num;
    scanf("%d", &num);
    if(num < 10) docso(num);
    else if(num < 100) {
        int c = num/10;
        if(c == 1) {
            printf("muoi ");
            docso(num % 10);
        }else{
            docso(c);
            printf(" muoi ");
            docso(num%10);
        }
    }else if(num < 1000) {
        int c = num/100;
        docso(c); printf(" tram ");
        c = num % 100;
        if(c < 10) {
            printf("le ");
            docso(c);
        }else {
            int d = c/10;
            if(d == 1) {
                printf("muoi ");
                docso(c % 10);
            }else{
                docso(d);
                printf(" muoi ");
                docso(c%10);
            }
        }
    }
    return 0;
}
