#include <stdio.h>
#include <iostream>

#define val(x)(tga=x)
#define swap(x,y) { x = x + y; y = x - y; x = x - y; }

int main(){
    int x=0,y=0;
    std::cin>>x;
    std::cin>>y;
    printf("%d\n",x);
    printf("%d\n",y);
    swap(x,y)
    printf("%d\n",x);
    printf("%d\n",y);
    return (0);
}