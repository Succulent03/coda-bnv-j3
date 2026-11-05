#include <stdlib.h>
#include <stdio.h>

int main(){
	int nombre;
	char symbole;
	int boucle;

	printf("Choisissez un symbole + ou -\n");
	scanf(" %c", &symbole);
	printf("Choisissez un nombre autre que 0\n");
	scanf("%d", &nombre);

	if(symbole == '+'){
		boucle = 0;
		while(boucle < nombre){
			printf("%d\n", boucle);
			boucle = boucle + 1;
		}
	}
	else if(symbole == '-'){
		boucle = nombre;
		while(boucle > 0){
			printf("%d\n", boucle);
			boucle = boucle - 1;
		}
	}
	else{
		printf("Le symbole %c n'est pas reconnu\n", symbole);
	}
	return(0);
}


