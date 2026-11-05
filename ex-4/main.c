#include <stdlib.h>
#include <stdio.h>

int main(){
	int nombre;
	int boucle = 0;

	printf("Choisissez un nombre autre que 0:\n");
	scanf("%d", &nombre);

	while(boucle < nombre){
		printf("%d\n", boucle);
		boucle = boucle + 1;
	}
	return(0);
}
