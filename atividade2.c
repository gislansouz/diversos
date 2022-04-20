//===============EXAMPLE============

#include <stdio.h>
#include <stdlib.h>

#define DIE \
fprintf(stderr, "Fatal Error:Abort\n");exit(8);

int main() {
    /* a random value for testing */
    int value;

    value = 1;
    if (value < 0){
        DIE;
    }
    printf("We did not die\n");
    return (0);
}

//===================================

/*o valor sendo ou não menor que zero o programa irá fechar,pois o if não tem chaves então 
após o primeiro ponto e virgula do DIE a instrução já está fora do bloco if assim independente do 
valor executará o exit(8),pode ser resolvido colocando as chaves no if*/

