#include <stdio.h>

int main(){
	int n;
	int list[21][2];
	scanf("%d", &n);
	list[0][0] = 1;
	list[0][1] = 1;
	for(int i = 1; i < n; i++){
		list[i][0] = list[i-1][1];
		list[i][1] = list[i-1][0] + list[i-1][1];
	}
	
	printf("%d", list[n-1][0] + list[n-1][1]);
}
