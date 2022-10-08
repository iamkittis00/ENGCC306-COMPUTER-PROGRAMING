#include <stdio.h>

int main () {
    int i = 0 ;
    int K = 0 ;
   /* printf("--|Show 'Hello World' to screen %d line(s) \n",K) ;
    for (i = 0;i < K;i++){
        printf("[%3d] Hello World \n",i);
    }*/

    char star = '*' ;
    int j = 0 ;
    int N ;
    printf("input : ") ;
    scanf("%d",&N) ; 
    i = 0 ;
    j = 0 ;
    printf("\n") ; 

    while (i < N) {
        j = 0 ;
        while (j < N ) {
            if (i < j)
                printf("%c",star) ;
                j++ ;
        } 
        printf("%s","\n") ;
        i+=1 ;     
    }
    return 0 ;
}