/* toh.c
 *
 * Author: Roberto D'Auria
 * Implementation of the Tower of Hanoi using a recursive function.
 * To make it "interactive", remove the comments in the code.
 */

#include <stdio.h>

void move(int n, char fr, char to, char using);

int main(){
    int n = 3;
    move(n, 1, 3, 2);

    return 0;
}

void move(int n, char fr, char to, char using)
{
    if (n > 0){
        move(n - 1, fr, using, to);
        printf("Muovo da %d a %d\n", fr, to);
        move(n - 1, using, to, fr);
    }
}
