#include <stdio.h>

#define SQR(x) x%10==0?true:false

int main(){
    int counter; /* counter for loop */
    counter = 9;
    bool at;
    at=SQR(counter);
    if(at)
        printf("%d true\n", counter);
    else
        printf("%d false\n", counter);

    return (0);
}
