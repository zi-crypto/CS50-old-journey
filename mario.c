#include <stdio.h>
#include <cs50.h>

void square(int dim, char block);

int main(void){
    while (true){
        int dimension;
        char block;

        do{
            dimension = get_int("What is your dim? ");
        }while (dimension < 1);

        do{
            block = get_char("The Type of Block? ");
        }while (block == '\0');

        square(dimension, block);
    }
}

// no one got this result... its mine and its more compact and smart (Alhamdulillah)
void square(int dim, char block){
    for (int i = 1; i <= (dim*dim); i++){
        printf("%c", block);
        if (i % dim == 0){
            printf("\n");
        }
    }
}