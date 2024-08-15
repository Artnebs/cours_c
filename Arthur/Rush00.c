#include "stdio.h"



/*
int multip(int a, int b){
	return  a * b;
}

int main(){
	int a = 0, b = 0;
	printf("entres un nombre entier pour a:\n");
	scanf("%d", &a);	
	printf("entres un nombre entier pour b:\n");
	scanf("%d", &b);
	int c = multip(a, b);
	printf("ton résultat est %d\n", c);
	return 0;
} 
*/

void aux(int a, char extremite, char mid){
	for(int i = 0; i<a; i++){
		if(i == 0 || i == a-1){
			printf("%c", extremite);
		}		
		else {printf("%c", mid);
		}
	}
	printf("\n");
}

void rush(int a, int b){
	for(int i = 0; i<b; i++){
		if(i == 0 || i == b-1){
		aux(a, 'o', '-');
		}
		else {
		aux(a,'|', ' ');
		}	
	}
	printf("\n");
}


int main(){
rush(5, 3);
rush(5,1);
rush(1,1);
rush(1,5);
}


