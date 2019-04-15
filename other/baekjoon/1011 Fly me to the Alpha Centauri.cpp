#include <stdio.h>
#include <math.h>

int main(){
	int t, x, y, distance, max_n, count = 0;
	
	scanf("%d", &t);
	for(int i = 0; i < t; i++){
		scanf("%d %d", &x, &y);
		distance = y-x;
		
		max_n = floor(sqrt(distance));
		
		count = max_n * 2 - 1;
		distance -= max_n*max_n;
		
		while(distance > 0){
			count++;
			if(max_n >= distance) break;
			else distance -= max_n;
		}		
		printf("%d\n", count);
	}
	
}
