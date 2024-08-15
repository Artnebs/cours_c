#include "stdio.h"



int ft_is_prime(int nb){
	for(int i = 2; i<=nb/2; i++)
	{
		if(nb % i == 0)
		{
			return 0;
		}
	}
	return 1;
}


int fib(int rang){
	if(rang == 0){
		return 0;
	}
	if(rang == 1){
		return 1;
	}
	return fib(rang -2)+ fib(rang-1);
	
}


int ft_next_prime(int nb){
	while(ft_is_prime(nb)==0){
		nb++;
	}
	return nb;
}


int main(int argc, char ** argv){
	int a = atoi(argv[1]); 
	//printf("entre un nombre:\n");
	//scanf("%d", &a);
	printf("résultat pour %d: %d\n", a, ft_is_prime(a));

/*	int r; 
	printf("entre un rang dans la suite de fibonacci:\n");
	scanf("%d", &r);
	printf("le résultat est : %d\n", fib(r));*/
/*
	int a; 
	printf("entre un nombre:\n");
	scanf("%d", &a);
	printf("résultat pour %d: %d\n", a, ft_next_prime(a));
*/
 

}




