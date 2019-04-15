#include <stdio.h>

int list[10]; 

int main(){
	char n[10];
	int temp, i;
	scanf("%s", &n);
	
	for(i = 0; n[i]; i++)
		list[n[i]-48]++; // '0' = 48
	
	temp = list[6] + list[9];
	
	list[6] = temp/2;
	list[9] = temp/2;
	
	if(temp % 2 == 1) list[9]++;
	
	temp = 0;
	for(i = 0; i < 10; i++)
		if(temp < list[i])
			temp = list[i];
	printf("%d", temp);
}
