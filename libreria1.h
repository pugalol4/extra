#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>

 
float calcular1(char caracter[] , int puntero, int flag, float numero1, char operacion, float decimal1)
{
   int32 cont=1;
   if(caracter[puntero]==45){
          flag=1;
          puntero++;                                //012345
       }                                           //{2.2+2=}
       while(caracter[puntero]!='+'  &&  caracter[puntero]!='-'  &&  caracter[puntero]!='*'  &&  caracter[puntero]!='/' &&  caracter[puntero]!='.'){
              numero1=(numero1*10)+(caracter[puntero]-'0');
              puntero++;}
       if(caracter[puntero]=='.'){
           puntero++;
           while(caracter[puntero]!='+'  &&  caracter[puntero]!='-'  &&  caracter[puntero]!='*'  &&  caracter[puntero]!='/'){
               decimal1=(decimal1*10)+(caracter[puntero]-'0');
               puntero++;
               cont*=10;
         }
       }
       operacion=caracter[puntero];
       puntero++;
       if(cont >10000)
       {
               numero1=10101010;
       }
       else
       {
        numero1 = numero1+(decimal1/cont);
       }
      
       
       if(flag==1){
         numero1=numero1*-1;
         flag=0;
      }
      
      return numero1;
}


float calcular2(char caracter[] , int puntero, int flag, float numero2, float decimal2)
{
   int32 cont=1;
   if(caracter[puntero]==45){
          flag=1;
          puntero++;
       }       //{1.2+2=}
       while(caracter[puntero]!='=' &&  caracter[puntero]!='.'){
           numero2=(numero2*10)+(caracter[puntero]-'0');
           puntero++;
       }
       if(caracter[puntero]=='.'){
            puntero++;
            while(caracter[puntero]!='='){
            decimal2=(decimal2*10)+(caracter[puntero]-'0');
            puntero++;
            cont*=10;
            }
       }
        numero2=numero2+(decimal2/cont);
       
       if(flag==1){
         numero2=numero2*-1;
         flag=0;
      }
      return numero2;
}

int recorrer(char caracter[] , int puntero, int flag, float numero1, char operacion, float decimal1)
{
   
   if(caracter[puntero]==45){
          flag=1;
          puntero++;                                //012345
       }                                           //{2.2+2=}
       while(caracter[puntero]!='+'  &&  caracter[puntero]!='-'  &&  caracter[puntero]!='*'  &&  caracter[puntero]!='/' &&  caracter[puntero]!='.'){
              numero1=(numero1*10)+(caracter[puntero]-'0');
              puntero++;}
       if(caracter[puntero]=='.'){
           puntero++;
           while(caracter[puntero]!='+'  &&  caracter[puntero]!='-'  &&  caracter[puntero]!='*'  &&  caracter[puntero]!='/'){
               decimal1=(decimal1*10)+(caracter[puntero]-'0');
               puntero++;
         }
       }
       operacion=caracter[puntero];
       puntero++;
       if(decimal1<=9){
        numero1=numero1+(decimal1/10);
        }
       else if(decimal1>9 && decimal1<=99){
       numero1=numero1+(decimal1/100);
       }
       else if(decimal1>99 && decimal1 <=999){
        numero1=numero1+(decimal1/1000);
       }
       else if(decimal1>999 && decimal1 <=9999){
        numero1=numero1+(decimal1/10000);
       }
       if(flag==1){
         numero1=numero1*-1;
         flag=0;
      }
      
      return puntero;
}



void clean(float *numero1,float *numero2, char *operacion, int *puntero,int *i,int *calculo, float *resultado){
       *numero1=0;
       *numero2=0;
       *operacion=0;
       *puntero=0;
       int clear;
      *i=0;
      *calculo=0;
      *resultado=0;
   }

