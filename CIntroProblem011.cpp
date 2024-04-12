#include<stdio.h>

#define MAX_SIZE 150
#define MIN_SIZE 10
#define MAX_WEIGHT 30
#define loop(i, a, b) for(int i = a; i <= b; i++)
#define loopdown(i, a, b) for(int i = a; i >= b; i--)

double size[3], weight;

int main() {

    freopen("ngothuc.txt", "r", stdin);

    scanf("%lf %lf %lf %lf", size, size+1, size+2, &weight);
    
    int ok = 1;
    loop(i, 0, 2) {
        if(size[i] < MIN_SIZE || size[i] > MAX_SIZE) {
            ok = 0;
            break;
        }
    }
    if(weight > MAX_WEIGHT) ok = 0;

    if(ok) {
        printf("OK");
    }else printf("DENY");

    return 0;
}
