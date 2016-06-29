#include <stdio.h>
#include <malloc.h>


int tower_mechanics(int *A, int *B, int *C);

int main() {


    int i = 0, n = 0;
    int x = 1;

    //label pegs
    int *pegA = malloc(5 * sizeof(int));
    int *pegB = malloc(5 * sizeof(int));
    int *pegC = malloc(5 * sizeof(int));

    //set up starting position
    for(i = 5; i > 0; i--){
        pegA[i] = i;
        x++;
        printf("%d\t", pegA[i]);
    }

    tower_mechanics(pegA, pegB, pegC);

//    printf("%d", x);
//    printf("pegA = %d\n", pegA[3]);


    //show towers
//    printf("A |");
//    for(n = 0; n < x; n++){
//        printf("x");
//    }
//    printf("\n");
//    printf("B |\n");
//    printf("C |\n");

    return 0;
}

int tower_mechanics(int *A, int *B, int *C) {

    //big problem terminating condition
    if(C[0] == 5 && C[1] == 4 && C[2] == 3 && C[3] == 2 && C[4] == 1 && C[5] == 0){
        return 1;
    }
    

    return 0;

}