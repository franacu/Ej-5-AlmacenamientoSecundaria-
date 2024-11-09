//Escriba un programa que calcule la cantidad de líneas existentes en un archivo.
#include <stdio.h>

int main()
{
    char *archivo="Ejercicio5.txt";
    FILE *fp;
    fp= fopen(archivo,"r");
    if(fp==NULL)
    {
        printf("No se creo con exito\n");
        return -1;
    }else
        {
            printf("Creado con exito\n");
            fprintf(fopen(archivo,"a"),"Primer linea\n");
        }
    int cont=0;
    char linea[256];
    while (fgets(linea,sizeof(linea),fp)!=NULL)
    {
        cont++;
    }
    fclose(fp);
    printf("El archivo contiene %d líneas.\n", cont);
    return 0;
}
