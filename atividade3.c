#include <stdio.h>
#define SQR(x) ((x) * (x))

int main(){
    int counter; /* counter for loop */

    for (counter = 0; counter < 5; ++counter) {
        printf("x %d, x squared %d\n",counter+1, SQR(counter+1));
    }

    return (0);

}

//=============================================
/* devido não haver parenteses nas variaveis x o resultado é diferente do esperado pois a 
operação será counter+1*counter+1,assim pela precedencia de sinais o resultado será 2*counter+1 
ao inves de (counter+1)² pode ser resolvido apenas colocando parenteses nas variaveis;
solução: SQR(x) ((x) * (x))
*/
