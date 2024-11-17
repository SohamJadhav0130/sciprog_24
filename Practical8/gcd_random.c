/*
Iterative and recursive versions of Euclids algortihms to calculate the gcd of two positive integers*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int interativeGCD(int a, int b) {
    int temp;
    while(b!=0){
        temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}

int recursiveGCD(int a, int b){
    if (b==0){
        return a;
    }
    else{
        return(recursiveGCD(b, a%b));
    }
}

int main(){
    int a, b, error;

// Generate two number random positive integers between 1 and 20
    srand(time(NULL));
    a = (rand() % 20) + 1;
    b = (rand() % 20) + 1;

    printf("IterativeGCD (%d, %d)=%d\n", a,b, interativeGCD(a,b));
    printf("RecursiveGCD (%d, %d)=%d\n", a,b, recursiveGCD(a,b));

    return 0;
}