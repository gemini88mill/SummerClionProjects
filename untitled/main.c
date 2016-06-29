#include <stdio.h>

//fibonacci example
int fibonacci(int n);


int main() {

    int final_num = 10;

    int i;
    for(i = 0; i < final_num; i++)
        printf("%i\t" , fibonacci(i));

    return 0;
}

int fibonacci(int n){
    //check for first and second numbers

    //if n = 0, return 0. the two if statements are the terminating conditions for the series.
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}