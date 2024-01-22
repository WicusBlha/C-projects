// Question: Write a program in C that can compute if a stack grows "Up or Down"
#include <stdio.h>
#include <stdbool.h>

/* return: true if up, false if down
* up is positive
* down is negative */

bool upordown (int *other){
    int x;

    if(!other){
        return upordown(&x);
    } else {
        return &x > other;
    }
}

int main(){
    printf("%s\n", upordown(NULL) ? "Up" : "Down");
    return 0;
}

// Ty for @Low Level Learning on youtube for the code, idea, and topic of this interview question.