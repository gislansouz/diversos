#include <stdio.h>
#include <iostream>

#define is_digit(x) ('0' <= (x) && (x) <= '9')
#define is_hex(x) ((is_digit(x))||('a'<=(x) && (x)<='f')||('A'<=(x) && (x)<='F'))

int main(){
    char valor1;
    std::cin>>valor1;
    if(is_digit(valor1))
        printf("%c digital\n",valor1);
    if(is_hex(valor1))
        printf("%c hexa\n", valor1);
    else
        printf("%c caractere não numerico\n", valor1);
    return (0);
}