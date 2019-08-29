#include <stdio.h>
#define filas 3
#define columnas 3
int main() {
int matriz[filas][filas];
int matriz2[filas][columnas];
int sumamatriz[filas][columnas];
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
//hago la suma de las dos marices y el resultado lo almaceno en una nueva matriz
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
         pos1=matriz[i][j];

         pos2=matriz2[i][j];

         result=pos1+pos2;

         sumamatriz[i][j]=result;
        }
    }
    //muestro la nueva matriz
    for (int i = 0; i <filas ; ++i) {
       printf("\n");
        for (int j = 0; j < columnas; ++j) {
            printf("%d\t",sumamatriz[i][j]);
        }
    }
}
