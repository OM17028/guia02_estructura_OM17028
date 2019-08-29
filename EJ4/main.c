#include <stdio.h>

int main() {
  int filas, columnas,opcion,filasuma,columnasuma;
//pregunto cuantas filas desea administrar
    printf("ingrese el cuantas filas tendran las matrices");
    printf("\n");
    scanf("%d",& filas);
//pregunto cuantas columnas desea administrar
    printf("ingrese el cuantas columnas tendran las matrices");
    printf("\n");
    scanf("%d",& columnas);

    int matriz[filas][filas];
    int matriz2[filas][columnas];
    int pos1,pos2,result;
    //lleno la matriz 1
    for (int i = 0; i <filas ; ++i) {
        for (int j = 0; j < columnas; ++j) {
            printf("ingrese numero de la matriz 1 posicion %d, %d",i,j);
            printf("\n");
            scanf("%d",& matriz[i][j]);

        }
    }
    //lleno la matriz 2
    for (int i = 0; i <filas ; ++i) {
        for (int j = 0; j < columnas; ++j) {
            printf("ingrese numero de la matriz 2 posicion %d, %d",i,j);
            printf("\n");
            scanf("%d",& matriz2[i][j]);

        }
    }
    //pregunto al usuario que desea hacer
    printf("que desea hacer 1.sumas filas 2.sumas columnas");
    printf("\n");
scanf("%d",&opcion);

    if (opcion==1){
        printf("de que columna desea sumar sus filas: ");
        scanf("%d",&columnasuma);
        for (int i = 0; i < columnas; ++i) {
            pos1=matriz[i][columnasuma-1];
            pos2=matriz2[i][columnasuma-1];
            result=pos1+pos2;
        }
}else{
        printf("de que fila desea sumar sus columnas: ");
        scanf("%d",&filasuma);
        for (int i = 0; i < columnas; ++i) {
            pos1=matriz[filasuma-1][i];
            pos2=matriz2[filasuma-1][i];
            result=pos1+pos2;
        }
}
printf("EL resultado de la suma es ");
    printf("\n");
    printf("%d",result);
}