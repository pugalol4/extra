#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>

 


int operacion2(char caracter[] , int puntero, int flag, int numero1)
{
   puntero++;
                                        //{1+1=}
       while(caracter[puntero]!=59 && caracter[puntero]!=13){
              numero1=(numero1*10)+(caracter[puntero]-'0');
              puntero++;}
       

      
      return numero1;
}

int operacion3(char caracter[] , int puntero, int flag, int numero1)
{
   puntero++;
                                     //{1+1=}
       while(caracter[puntero]!=59 && caracter[puntero]!=13){
              puntero++;}
      
      return puntero;
}

char operacion1(char operacion,float resultado, float numero1, float numero2,float calculo)
{
   switch(operacion){
               case '+':
                   resultado=numero1+numero2;
                 return printf("\f\n Numero1: %.4f + Numero2: %.4f  Resultado: %.4f  \n",numero1,numero2,resultado);
                   calculo=0;
                   getch();
               break;
               case '-':
                   resultado=numero1-numero2;
                return   printf("\f\n Numero1: %f - Numero2: %f  Resultado: %f  \n",numero1,numero2,resultado);
                   calculo=0;
               break;
               case '*':
                   resultado=numero1*numero2;
                return   printf("\f\n Numero1: %f * Numero2: %f Resultxado: %f  \n",numero1,numero2,resultado);
                   calculo=0;
               break;
               case '/':
                   resultado=numero1/numero2;
                return printf("\f\n Numero1: %f / Numero2: %f  Resultado: %f  \n",numero1,numero2,resultado);
                   calculo=0;
               break;
               default:
                  return printf("caracter invalido");
               }
}


