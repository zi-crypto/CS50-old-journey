#include <cs50.h>
#include <stdio.h>

void pyramid(int base);

int b;
int main(void){
    while (1) {
        do{
            b  = get_int("Pyramid's Base: ");
            pyramid(b);
        }while (b > 1);
    }
}

void pyramid(int base){
    for (int i = 1; i <= base; i++){
        for (int j = 0; j < i; j++){
            printf("#");
        }
        printf("\n");
    }
}
