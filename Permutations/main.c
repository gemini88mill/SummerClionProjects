#include <stdio.h>
#include <mem.h>

//permutations

void permute(char *i, int start_index, int ending_index);
void swap(char *x, char *y);

/*Program takes a lock of three values and permutes through all numbers recursively*/

int main(){

    char word[4] = "car";
    int n = strlen(word);

    //create a function that takes an array of ints
    permute(word, 0, n - 1);

    return 0;
}

void permute(char *i, int start_index, int ending_index) {
    //starting index and ending index are set so the program knows what to permute through
    int x;

    if(start_index == ending_index){
        printf("%s\n", i);
    } else {
        for (x = 1; x <= ending_index; x++) {
            swap(i + 1, i + x);
            permute(i, start_index + 1, ending_index);
            swap(i + start_index, i + x);
            //printf("%s\n", i);
        }
    }
}

void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}