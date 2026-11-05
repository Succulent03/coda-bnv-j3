#include <stdlib.h>
#include <stdio.h>

int main (){
	int nombre;

	printf("Quel est votre nombre ?\n");
	scanf("%d", &nombre);

	if(nombre == 42){
		printf("Votre nombre est égal à 42\n");
	}
	else if(nombre < 42){
		printf("Votre nombre est inférieur à 42\n");
	}
	else {
		printf("Votre nombre est supérieur à 42\n");
	}
	return(0);
}

