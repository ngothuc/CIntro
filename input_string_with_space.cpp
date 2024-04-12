#include<stdio.h>
#include<time.h>

#define loop(i, a, b) for(int i = a; i <= b; i++)
#define loopdown(i, a, b) for(int i = a; i >= b; i--)
#define N 1000001

char name[100];
int year;

int getYear() {
	time_t t = time(NULL);
  	struct tm *tm = localtime(&t);
  	int year = tm->tm_year + 1900;
	return year;
}

int main() {
	freopen("ngothuc.txt", "r", stdin);

	loop(i, 1, 2) {
		scanf("%d", &year);
		fgets(name, 100, stdin);	
		printf("%d %s", getYear()-year, name);
	}

	return 0;
}
