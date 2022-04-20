//===============EXAMPLE=================

#include <stdio.h>
#define RECIPROCAL(number) (1.0 / (number))

int main(){
    float counter; /* Counter for our table */

    for (counter = 1.0; counter < 10.0;counter += 1.0)
        printf("1/%f = %f\n", counter, RECIPROCAL(counter));

    return (0);
}

//=======================================
/*o espaço entre RECIPROCAL e (number) faz com que o compilador reconheça a macro RECIPROCAL 
como uma macro sem parametro, assim substitui ela no codigo por (number) (1.0 / (number)) gerando o erro 
como se number fosse uma variavel e não um parametro, retirando o espaço o erro sumirá*/