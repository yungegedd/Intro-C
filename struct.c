#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Batiment {
    float surface_habitable;
    int nb_de_pieces;
    
};

struct Batiment ma_maison, la_maison_de_ton_voisin;

struct Utilisateur
{
    int numero_de_client;
    char identifiant[12];
    char mot_de_passe[32];
};

struct Equipe{
    int nom[12];
    struct Utilisateur membres[8];
};

struct Equipe e;
struct rectangle
{
    float longueur, largeur;
};
struct rectangle r ={5.0, 3.0} , t;

typedef struct{
    float rouge,vert,bleu;
}couleur;



int main(){
    couleur jaune = {1.0, 1.0, 0.0};
    t=r;
    e.membres[0].numero_de_client = 123;
    printf("%f %f\n", r.longueur, r.largeur);

    return 0;
}