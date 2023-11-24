#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(){

    time_t t;

    bool found = false;

    int random_number;
    int count = 0;
    int list[5];

    srand((unsigned) time(&t));

    while(count < 5){
        found = false;
        random_number = rand() % 20;
        printf("genereated number : %d\n", random_number);
                
        for(int i=0; i<5; i++){
            if(list[i] == random_number){
                // printf("found\n");
                found = true;
                break;
            }
        }

        if(!found){
            list[count] = random_number;
            count++;
        }
        
    }

    for(int i=0; i<5; i++){
        printf("list[%d] : %d\n", i, list[i]);
    }

}