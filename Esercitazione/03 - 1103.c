/*
Obiettivo: Strutture, array di strutture, costrutti condizionali e sottoprogrammi.

Definisci una struct chiamata Dispositivo contenente tre campi: id_dispositivo (un intero), temperatura (un float), e stato_connessione (un intero: 1 per connesso, 0 per disconnesso). Nota: usiamo l'ID numerico per evitare le stringhe.

Nel main, dichiara un array di 5 dispositivi e popolalo con dati inventati da te.

Scrivi una funzione che riceve l'array di dispositivi. Questa funzione deve cercare e stampare l'ID del dispositivo connesso (stato uguale a 1) che ha registrato la temperatura più alta.

*/




#include <stdio.h>

struct Device{
    int id_device;
    float temperature;
    int connection_status;
};

int findDevice(struct Device arr[]){
    float higerTemp = 0;
    int idFound = -1;
    for (int i = 0; i < 5; i++){
        if(arr[i].temperature > higerTemp && arr[i].connection_status){
            idFound = arr[i].id_device;
            higerTemp = arr[i].temperature;
        }
    }
    if(idFound > 0){
        printf("The devices connected with higher temperature is devices with id: %d whith temperature of %.2f", idFound, higerTemp);
    } else {printf("No devices connected");}
    return 0;
}


int main(){
    struct Device devices[5];
    printf("Insert five devices: \n");
    for (int i = 0; i < 5; i++){
        scanf("%d %f %d", 
            &devices[i].id_device,
            &devices[i].temperature,
            &devices[i].connection_status);
    }
    findDevice(devices);
    return 0;
}