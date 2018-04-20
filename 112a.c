#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
	char lala1[102] = {0};
	char lala2[102] = {0};
	scanf("%s", &lala1);
	scanf("%s", &lala2);
	int n = strlen(lala1);
	for(int i = 0; i < n; i ++){
		lala1[i] = tolower(lala1[i]);
		lala2[i] = tolower(lala2[i]);
		if(lala1[i] > lala2[i]){
			printf("1\n");
			return 0;
		}
		else if(lala2[i] > lala1[i]){
			printf("-1\n");
			return 0;
		}
	}
	printf("0\n");

}