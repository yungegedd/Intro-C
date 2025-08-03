#include<stdio.h>
#include<stdlib.h>
#include<string.h>



int main(void){
//controle de flux et op booleenes unnaires et autres
    // int a,b;

    // a = 3<4;
    // printf("a = %d\n", a); // 1 (true)
    // b = 3>4;
    // printf("b = %d\n", b); // 0 (false)



    // Opérateurs logiques
    // int x,y;
    // x = 1; // true
    // y = 0; // false 

    // printf("x && y = %d\n", x && y); // 0 (false)
    // printf("x || y = %d\n", x || y); // 1 (true)
    // printf("!x = %d\n", !x); // 0 (false)
    // printf("!x || y = %d\n", x || y); // 1 (true)


    // int a,b,c,d;

    // a = 1; // true
    // b = 0; // false
    // c = 0; // false
    // d = a && (!a || b || c); // 0 (false)


  //  Ces op´erateurs peuvent ˆetre combin´es avec les op´erateurs arithm´etiques,
//d’affectation, et d’affectations compos´ees que nous avons vus pr´ec´edemment.
//Nous pouvons r´esumer les priorit´es des op´erateurs que nous avons d´ej`a vus en
//les rangeant par ordre d´ecroissant. Deux op´erateurs sur la mˆeme ligne ont
//mˆeme priorit´e, auquel cas ils sont ´evalu´es de gauche `a droite.


//() //[] ++ -- -(unaire) ! * / %  +- <<= =>>
// == != && ||  -= += *= /=


// int x,y,q;
// x = 3;
// y = 5;
// q = 3*x - 10 < 2*x - y; // 3 + 10 = 13
// printf("q = %d\n", q); // 0 (false)

//clauses
//instructions if else



// int n = 0;

// while (n < 6)
// {
//     printf("n = %d\n", n);
//     n++; // Incrémentation de n
// }

// //D,abord on incement n de 0 à 6, puis on décrémente n de 6 à 0 . Bravo !
// while (n > 0)
// {
//     printf("n = %d\n", n);
//     n--; // Décrémentation de n

// }
//ici la clause dans la premiere boucle est fausse, donc la boucle ne s'exécute pas
// mais celle dans la deuxième boucle est vraie, donc la boucle s'exécute
// while (n>0)
// {
//     printf("%d est positif\n", n);
//     n--; // Décrémentation de n
// }

// while (n<3)
// {
//     printf("%d est strictement inférieur à 3\n", n);
//     n++; // Incrémentation de n
// }

// do
// {
//     printf("%d est strictement positif\n", n);
//     n--; // Incrémentation de n
// } while (n > 0);

// do
// {
//     printf("%d est strictement inférieur à 5\n", n);
//     n++; // Incrémentation de n
// } while (n < 5);

// while (n<10)
// {
//     printf("n =%d\n", n);
//     n++; // Incrémentation de n
// }

// for (int i = 0; i < 10; i++)
// {
//     printf("i=%d\n", i);
// }

// int i = 0,j=0;

// for(i = 0; i+ 25 >= i*i ; i++){
//     printf("i = %d, j = %d\n", i,j);
//     j += i; // Incrémentation de j
// }

// int a = 5;
//   for (int i = 0; i < a; i++)
//   {
//     int a = 300;
//     printf("n=%d\n",n);
//   }

  int nb[7];
  for (int k = 0; k < 7; k++)
  {
    nb[k] = k; // Initialisation du tableau
  }
  for (int k = 0; k < 7; k++)
  {
    if (nb[k] % 2 == 0) nb[k]++; // Vérification si l'élément est pair
  }
  for (int k = 0; k < 7; k++)
  {
    printf("nb[%d] = %d\n", k, nb[k]); // Affichage des éléments du tableau
  }
  int a[10];
  char b[10];
  float v[250];

  printf("sizeof(v)/sizeof(float) = %d\n", sizeof(v)/sizeof(float)); // Affichage du nombre d'éléments dans le tableau v

  printf("sizeof(a) = %zu\n", sizeof(a)); // Affichage de la taille du tableau a
  printf("sizeof(b) = %zu\n", sizeof(b)); // Affichage de la taille du tableau b
  

  //tableaux a plusieurs dimensions

  int n = 25;
  int img [n][n];

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      float x = 2*(float)i/(float)n-1.0; // Normalisation de i
      float y = 2*(float)j/(float)n-1.0; // Normalisation de j
      img[i][j] = x*x + y*y <= 0.9*0.9; // Condition pour remplir le tableau
    }
    
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (img[i][j]) printf("**"); // Affichage de 1 si la condition est vraie
      else printf("  "); // Affichage de 0 si la condition est fausse
    }
    printf("\n"); // Nouvelle ligne après chaque ligne du tableau
  }
  
}
