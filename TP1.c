#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[]){

    char num[6];
    unsigned long nnum;
    char cible[6];
    strcpy(cible,argv[1]);

    bool found = false;
    int cont =0;

    FILE* file;
    file = fopen(argv[2], "r");

    if (file){
        while(fscanf(file, "%lu", &nnum)!=EOF ){

            if (!strcmp(num,cible)){
                found = true;
                cont++;
            }
            else if (found){
                break;
            }
        }
        printf("Total: %d", cont);
        fclose(file);
    } else {
        printf("File no found");
    }
    return 0;
}