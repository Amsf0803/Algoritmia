#include <stdio.h>

int main(){
    int w;
    printf("Enter the weight of the watermelon: ");
    scanf("%d", &w);

    if(w % 2 == 0 && w > 2){
        printf("YES\n");
    } else {
        printf("NO\n");
    } // <- Esta es la llave que faltaba para cerrar el 'else'
    return 0; // Es buena práctica retornar 0 al final del main
}