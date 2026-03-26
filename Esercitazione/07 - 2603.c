#include <stdio.h>

struct Mappa{
    int id_settore;
    int griglia[3][3];
};

struct Mappa unione(struct Mappa mappaA, struct Mappa mappaB){

    struct Mappa mappaC;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (mappaA.griglia[i][j] > mappaB.griglia[i][j]) {
                mappaC.griglia[i][j] = mappaA.griglia[i][j];
            } else {
                mappaC.griglia[i][j] = mappaB.griglia[i][j];
            }
        }
    }

    mappaC.id_settore = mappaA.id_settore + mappaB.id_settore;

    return mappaC;

}


int main(){

    struct Mappa mappaA = { .id_settore = 1, .griglia = {{2,0,1},{0,2,1},{1,2,0}} };
    struct Mappa mappaB = { .id_settore = 2, .griglia = {{0,2,1},{1,2,1},{1,2,0}} };



    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%d\t", mappaA.griglia[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%d\t", mappaB.griglia[i][j]);
        }
        printf("\n");
    }

    struct Mappa mappaC = unione(mappaA, mappaB);

    printf("\n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%d\t", mappaC.griglia[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}