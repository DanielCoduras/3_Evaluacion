#include<stdio.h>
#include<iostream>
int main(){
    int x;
    int y;
    int *px;
    char salir;
    x=3;
    y=5;
    //Defino dos nuevas variables 
    px=&x;
    printf("direccion x=%X direccion y=%X",&x,&y);
    printf("\ncontenido x=%d contenido y=%d",x,y);
    
    std::cout<<"\nToca cualquier tecla para salir";
    std::cin>>salir;
    return 0;
    
    
}
