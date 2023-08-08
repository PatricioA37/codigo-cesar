#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <conio.h>
#define n 1024




/////FUNCION ENCRIPTADO/////////////


void encriptar(char cadena[n], int desp)
    {
        int d=0,i;
        char letra;

        printf("entrada a funcion: %s\n",cadena);
        while(cadena[d]!='\0')
        {
                //////////restriccion z,caracter especial, espacio + 1... etc ////////////
            cadena[d]=cadena[d]+desp;
            d++;

        }

        for(i=0;i<strlen(cadena);i++)
        {
            printf("salida funcion: %c\n",cadena[i]);
        }

    }

/////////////////CODIGO CESAR/////////////////////
void main()
{
   char cadena[n],desp2[2];
   char term;
   int i,falla,desp,opcion;

   printf("Cifrado Cesar\n\n");
   printf("Que desea hacer? seleccione 1 o 2 segun opcion.\n\n");

do
{



   printf("1 - Encriptar\n");
   printf("2 - Desencriptar\n");

   scanf("%d",&opcion);


   switch (opcion){

       case (1): printf("OPCION ENCRIPTAR\n--------------------------\n");

                 printf("\nEscribe un letra o frase:");

                gets(cadena);
                gets(cadena);

    do
    {
        fflush(stdin);
        printf("ingrse desplazamiento:");

        if(scanf("%d%c", &desp, &term) != 2 || term != '\n')  //esto sirve para ver si es una letra o un numero, dependiendo el tipo de variable, lee la que corresponde
            printf("es una letra, no numero\n"); //si es letra
        else
        {
            if(desp<0 || desp>9)printf("error, ha ingresado un numero invalido, ingrese un numero entre 1 y 9\n"); //en caso q sea numero, veo si cumple el rango
        }
    }
   while(desp <0 || desp>9 || term!='\n');



    printf("%d",desp);




  //printf("tamano %d",strlen(cadena)); /////// for necesita algo para ejecutar////


  ///////////////////// RESTRICCIONES//////////////////////


  for(i=0;i<strlen(cadena);i++)
  {
       if((isalpha(cadena[i])!=0)  || (isdigit(cadena[i])>0) ||(ispunct(cadena[i])!=0) || (cadena[i]== 32)  )
       {

       }
     else{

        falla=1;

        printf("caracter ingresado no valido:  %c\n",cadena[i]);


     }

////////////////////////  CONVERSION MAYUS////////////////
   cadena[i]= (toupper(cadena[i]));

  }


  encriptar(cadena, desp);

///////////////////// IMPRESION MAYUSCULA //////////////////
    printf("\nmensaje encriptado: %s\n",cadena);

    fflush(stdin);
    printf("\nPresiona Intro para finalizar...");
    getch();

        break;


        ////////////ECRIPTAR////////////////////////
       case (2): printf("OPCION DESENCRIPTAR\n-------------------\n");
                break;




       default: printf("opcion no valida, debe ser (1 o 2)\n-------------------------------------\n\n");
                break;





   }




//////////////////





}

while (opcion!=1 && opcion!=2);






}

