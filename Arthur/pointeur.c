#include <stdio.h>
#include <stdlib.h>

void affiche(char * str){
	for(int i = 0; str[i] != '\0';i++){
		putchar(str[i]);
	}
}

void affiche_int(int * tab, int size){
	for(int i = 0; i < size; i++){
		printf("%d, ", tab[i]);
		}
}


int * creer_tableau(int n){
	int* tab = malloc(sizeof(int)*n);
	for(int i = 0; i < n; i++){
		tab[i] = i;	
	}
	return tab; 
}

void reponse(int * nb){
	 *nb = 42;
}
	



int main(int argc, char ** argv){
	/* char * mystr = "malaury";

	affiche(mystr);*/
	
	/* int bravo[6] = {0,1,2,3,4,5};
	affiche_int(bravo, 3);*/
	
	if(argc != 2){
		printf("nombre arguments incorrect");
		return 1;
		}
	int n= atoi(argv[1]);
	int * gg = creer_tableau(n);
	affiche_int(gg, n);

/*
	int n = 4;
	reponse(&n);
	printf("%d", n);
*/


}

