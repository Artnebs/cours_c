#include <unistd.h>

void my_put_char(char c) {
    write(1, &c, 1);
}

void displayAlphabet() {
    char caractere = 'a';

    while (caractere < 122)
    {
        my_put_char(caractere);
        caractere++;
    }
    my_put_char('\n');
}

void displayAlphabet2(char caractere) {
    if (caractere < 122)
    {
        my_put_char(caractere);
        displayAlphabet2(caractere + 1);
    }
    else {
        my_put_char('\n');
    }
}

void preparerFarine() {
    
}

int faitGateau(int farine, int sucre, int oeufs) {
    preparerFarine(farine)
    casserOeufs(oeufs)
    versersucre(sucre)
}

// int main(int ac, char **argv)
int main() {
    // afficher tous les characteres de l'alphabet
    displayAlphabet2(97);
    int gateau;
    gateau = faitGateau(farine, sucre, oeufs);

    return 0;
}
