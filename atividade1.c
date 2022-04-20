//==============EXAMPLE============

#include <stdio.h>

#define FIRST_PART 7
#define LAST_PART 5
#define ALL_PARTS (FIRST_PART + LAST_PART) 

int main() {
    printf("The square of all the parts is %d\n", ALL_PARTS * ALL_PARTS); 
   return (0);
}

//================================

/*como as macros não estão entre parenteses  quando recebem o valor no codigo a conta 
é feita de forma errada, por conta da precedencia de sinal, no caso a conta será 7+5*7+5 que obterá 
como resultado 47 ,para resolver o problema só adicionar parenteces na macro 
"#define (ALL_PARTS FIRST_PART + LAST_PART)"*/