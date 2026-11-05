#include <stdlib.h>
#include <stdio.h>

int main(){
	char mot[50];
	int count = 0;
	printf("Saisissez un mot de moins de 50 caractères\n");
	scanf("%s", mot);

	while(count < 5){
		printf("%d : %s\n", count, mot);
		count = count + 1;
	}
	return(0);
}
