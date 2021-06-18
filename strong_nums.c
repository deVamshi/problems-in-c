#include <stdio.h>

int isStrongNumber(int num){
	int fact_arr[10] = { 1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880 };
	int sum = 0;
	int num_copy = num;
	while(num_copy){
		sum += fact_arr[num_copy % 10];
		num_copy /= 10;
	}
	return num == sum;
}

int main(void) {
    int n;
	scanf("%i", &n);
	for(int i = 1; i <= n; i++){
		if(isStrongNumber(i)){
			printf("%i\n", i);
		}
	}
	return 0;
}