#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
using namespace std;
int main(){
    int salir;
    int nletras;
    int cont;
    //Definimos el vector PUNTEROS
    char palabra[30];
    char *lista[3];//3 posiciones de memoria que apuntan a 3 palabras
    //Procedimiento
    for(cont=0;cont<3;cont++){
        //1. Leo una palabra
        cout<<"Palabra: ";
        cin>>palabra;
        //2. Averiguo cuantas letras tiene
        nletras=strlen(palabra);
        //3. Reservo memmoria para guardar la palabra
        lista[cont]= (char *) malloc(nletras*sizeof(char));
        //4. Escribo la palabra en la memoria reservada
        strcpy(lista[cont],palabra);//copia palabra en lista[cont]
        //5. Volvemos al punto 1.
        
    }
     for(cont=0;cont<3;cont++){
      cout<<lista[cont];    
      cout<<"\n ";                     
                               
     }
    printf("\nToca cualquier tecla para salir: ");
    scanf("%i",&salir);
    
} 
