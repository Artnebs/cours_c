#include <stdio.h>
#include <stdlib.h>


int fib(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    return fib(n-1)+fib(n-2);

}

int fibmem(int n){
    int* fibtab = malloc(sizeof(int)*n);
    fibtab[0] = 0;
    fibtab[1] = 1;
    int i = 2;
    while(i < n){
        fibtab[i] = fibtab[i-1] + fibtab[i-2];
        i++;
    }
    return fibtab[n-1]+fibtab[n-2];
}


int main(int argc, char** argv){
/*
    int d = atoi(argv[1]);
    printf("la valeur demandé est: %d\n", fibmem(d));

    return 0;
*/



}
