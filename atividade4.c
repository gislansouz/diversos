//=============EXAMPLE===================

#include <stdio.h>

#define SQR(x) ((x) * (x))

int main(){
    int counter; /* counter for loop */
    counter = 0;

    while (counter < 5){
        ++counter;
        printf("x %d square %d\n", counter, SQR(counter));

    }

    return (0);
}

//=======================================
/*o programa não produz o resultado  esperado pois o incremento irá ocorrer duas vezes
 e assim ao inves de executar o while 5 vezes executa 3,para obter o comportamento desejado,
 podemos colocar o incremento no bloco de codigo while e deixar somente a variavel como paramentro, 
 assim o contador irá contar a cada 1 incremento*/