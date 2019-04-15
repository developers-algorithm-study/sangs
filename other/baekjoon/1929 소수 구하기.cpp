#include <stdio.h>

int list[1000001]; 

int main(){
	int m, n, i, j;
	scanf("%d %d", &m, &n);
	
	for(i = 2; i <= n; i++) list[i] = 1;
	
	for(i = 2; i <= n; i++){
		if(list[i] == 0) continue;
		for(j = i+i; j <= n; j+=i) list[j] = 0;
	}
	
	for(i = m; i <= n; i++)
		if(list[i]) printf("%d\n", i);
}
