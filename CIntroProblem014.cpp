#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define CITY_PRICE 21000
#define DISTRICT_PRICE 29000
#define DEFAULT_WEIGHT 0.5
#define UNIT_PRICE 2500

int main() {
	
	double weight;
	scanf("%lf", &weight);
	
	if(weight <= 0.5) {
		printf("%d-%d", CITY_PRICE, DISTRICT_PRICE);
		return 0;
	}
	
	int k = ceil((weight - 0.5) / DEFAULT_WEIGHT);

	printf("%d-%d", CITY_PRICE + k*UNIT_PRICE, DISTRICT_PRICE + k*UNIT_PRICE);
	
	return 0;
}
