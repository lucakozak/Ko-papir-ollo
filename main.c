//
//  main.c
//  kopapirollo
//
//  Created by Kozak, Luca on 2017. 10. 27..
//  Copyright © 2017. Kozak, Luca. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    
    int ko, papir, ollo, a;
    int gep;
    gep = rand() % 3;
    
    ko=0;
    papir=1;
    ollo=2;
    
    
    printf("KO-PAPIR-OLLO JATEK\n");
    printf("-------------------\n");
    
    printf("Valassz a lehetosegek kozul!\n");
    printf("Ko=0 Papir=1 Ollo=2\n");
    printf("A valasztasod: \n");
    scanf("%d", &a);
    printf("A gep valasztasa: %d\n", gep);
    

        
    if(a==0){
        if(gep==0){
            printf("Dontetlen.\n");
        }
        if(gep==1){
            printf("A gep nyert.\n");
            
        }
        if(gep==2){
            printf("Te nyertel.\n");
        }
    
    }
    
    if(a==1){
        if(gep==0){
            printf("Te nyertel.\n");
        }
        if(gep==1){
            printf("Dontetlen.\n");
            
        }
        if(gep==2){
            printf("A gep nyert.\n");
        }}
    if(a==2){
        if(gep==0){
            printf("A gep nyert.\n");
        }
        if(gep==1){
            printf("Te nyertel.\n");
            
        }
        if(gep==2){
            printf("Dontetlen.\n");
        }}
    
    return 0;

    }
