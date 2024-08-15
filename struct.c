
#include <stdio.h>
#include <stdlib.h>

struct Personne {
    char* Nom;
    char* Prenom;
    int Age;
};

void affiche_personne(struct Personne ma_personne) {
    printf("Nom: %s\n", ma_personne.Nom);
    printf("Prenom: %s\n", ma_personne.Prenom);
    printf("Age: %d\n", ma_personne.Age);
}

struct Personne* creer_personne(){
    char* nom = malloc(sizeof(char)*50);
    char* prenom = malloc(sizeof(char)*50);
    int age;

    printf("Entrer votre Nom:\n");
    scanf("%s", nom);
    printf("Entrer votre Prénom:\n");
    scanf("%s", prenom);
    printf("Entrer votre Age:\n");
    scanf("%d", &age);

    struct Personne* ma_personne = malloc(sizeof(struct Personne));
    ma_personne->Prenom=prenom;
    ma_personne->Nom=nom;
    ma_personne->Age=age;

    // (*ma_personne).Prenom=prenom;
    // ma_personne->Prenom=prenom;

    return ma_personne;
}


int main(int argc, char** argv) {
    // strdup -> string duplicate: copie la string donnee sur une nouvelle espace memoire
    // strcpy -> string copy: il copier les characteres d'un string, supposant vers la ou il copie a l'espace memoire necessaire

    struct Personne arthur = {
        "Nebbou",
        "Arthur",
        34
    };
   
    struct Personne malaury = {
        .Nom = "Dutour",
        .Prenom = "Malaury",
        .Age = 21
    };

    // affiche_personne(malaury); 

    struct Personne* inscription = creer_personne();
    affiche_personne(*inscription);
free(inscription->Prenom);
free(inscription->Nom);
free(inscription);

}