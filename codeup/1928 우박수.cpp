#include <stdio.h>

void func(int var){
	printf("%d\n", var);
	if(var == 1) return;
	func((var % 2 == 0) ? (var / 2) : (3*var + 1));
	 
}

int main(){
	int n;
	scanf("%d", &n);
	func(n); 
}
