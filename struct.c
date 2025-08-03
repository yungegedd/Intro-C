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

struct utilisateur U;
printf("%d\n", sizeof(u));