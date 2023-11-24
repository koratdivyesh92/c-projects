#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

time_t t;   
bool found = false;
int random_number;
int list[5];

bool checkNumber(int randNum, int cnt){
    for(int i=0; i<cnt; i++){
        if(list[i] == random_number){
            printf("found\n");
            return true;
        }
    }
    return false;
}

int generateNumber(int count){
    int j = 0;
    while(j < count){
        found = false;
        random_number = rand() % 20;
        printf("genereated number : %d\n", random_number);

        found = checkNumber(random_number, count);

        if(!found){
            list[j] = random_number;
            printf("save list[%d]:%d\n", j, list[j]);
            j++;
        }
    }
}

int main(){
    
    srand((unsigned) time(&t));   

    generateNumber(5);

    for(int i=0; i<5; i++){
        printf("list[%d] : %d\n", i, list[i]);
    }

}