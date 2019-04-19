#include <stdio.h>

int main(){
	int k, n, list[21], i, j;
	
	scanf("%d %d", &k, &n);
	
	for(i = 0; i < k; i++) scanf("%d", &list[i]);
	
	for(i = k; i < n; i++){
		list[i] = 0;
		for(j = i; j >= i-k; j--){
			list[i] += list[j];
		}
	}
	printf("%d", list[n-1]); 
}
