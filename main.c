#include<stdio.h>
#include<stdlib.h>
#include "hello.h"

// void modify(int val){
//     val = 10;
// }
// int main( int argc, char* argv[] ) {
    
//     int i = 100;
//     modify(i);
//     printf("i = %d\n", i);  
//     exit (0);
// }
// passage par valeur
// passage par reference

// void modify(int *i){
//     *i = 10;
// }

// int main(){
//     int i = 100;
//     modify(&i);
//     printf("i = %d\n", i);
//     exit(0);
// }

// tableaux 
// int main(){
//     int val[] = {1,2,3,4,5,6};
//     printf("%ld\n", sizeof(val));
//     printf("%ld\n", sizeof(val[0]));
//     printf("%ld\n", val[10]);
//     int i;
//     for(i = 0; i < 6; i++){
//         printf("val[%d] = %d\n", i, val[i]);
//     }
//     exit(0);
// }

// strings

// int strcmp(char *s1,char *s2){
//     int i =0;
//     while( *(s1+i) ==  *(s2+i) ){
//         i++;
//         if (*(s1+i) == '\0' && *(s2+i) == '\0'){
//             return 1;
//     }
//     return 0;

// }
// }

int main(){
    // char hello[] = "Hello";
    // char complicated_hello[] = {'H', 'e', 'l', 'l', 'o'};

    // printf("%p\n",hello);
    // printf("%p\n",complicated_hello);
    // if (strcmp(hello, complicated_hello) == 1){
    //     printf("hello == complicated_hello\n");
    // }

    // return 0;
    char *str = "Hello";
    printf("%c\n", &str);
   
    
}
