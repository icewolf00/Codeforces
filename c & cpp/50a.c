#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
	int m,n;
	scanf("%d%d", &m, &n);
	printf("%d", (m/2)*n + (m%2)*(n/2));
}