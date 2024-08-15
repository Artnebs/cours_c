
#include <stdio.h>

int main() {
    char *myString = "coucou";
    char a = 'a';

    int myStaticString[5][3] = {
            {4,34,6},
            {37,8,53},
            {39,9,52},
            {30,11,14},
            {31,67,56},
        };
    // 5 = nbr tableaux ; 3 = nbr elements
    myStaticString[0]; // -> {4,3,6},
    myStaticString[0][1]; // -> 34

    printf("%d\n", myStaticString[1][0]);

    int **myTableaudeMessages = {
        "coucou", // {'c', 'o', 'u', ...}
        "comment ca va",
        "bien et toi",

    };

    // char c -> 1 octet -> 'a'
    // int -> 445567
    // char * -> 4 octets -> 0x13454334 -> addresse en memoire
    // char *mystring = "coucou"
    // myString++ -> 0x13454334 + 1 -> 0x13454335
    // ['c'(99)]['o']['u']['c']['o']['u'][0]
    //   ^                      ^
    // free myString
    // myString = "adzpapzdkdazdzad"
    // [a][]
    // ^
    // printf(myString) -> oucou
    // printf(myString[6]) -> 876876896908
    // free(void*)
    // malloc(void *, size)
}