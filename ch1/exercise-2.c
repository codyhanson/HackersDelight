#include <stdio.h>

//print all unsigned integers. 
//using an unsigned byte so that it won't take too long.
void main() {
    unsigned char i = 0;
    do {
        printf("%x\n", i++);
    } while (i);
}
