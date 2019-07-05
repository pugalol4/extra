#include <calculadora_display.h>
#include <libreria1.h>
#include <libreria2.h>

char caracter[22],cadena[20];//{-2+-2:}
int flag=0;
int cont_separador=0;
int bandera1=0;
int numero1=0, numero2=0,numero3=0;
float resultado=0;
int calculo=0;
int puntero=0,puntero2=0;
float decimal1=0,decimal2=0;
char operacion;
//void clean(void);
int i=0,j=1;
int clear=0;
int contadorGlobal1=1, cont=0,cont2=0;
int contadorGlobal2=1;
int contadorGlobal3=1;
int contInt3=0;


#INT_TIMER0
void TIMER0(){

   cont++;
   if(cont%6==0 && cont2<numero1)
      {
      printf("%s \r\n"cadena);
         cont2++;
      }
   
   set_timer0(28020);
}


void main()
{
   setup_timer_0(RTCC_INTERNAL | RTCC_DIV_8  );
   enable_interrupts(INT_TIMER0 );
   enable_interrupts(GLOBAL);
   
   set_timer0(28020);

   printf("\fIngresa los datos siguiendo el orden >palabra;numero< \r\n donde la palabra sea maximo 10 y el numero este entre 0-9 \r\n para limpiar variables use >seguido de un enter \r\n");
   while(TRUE)
   {
   if(kbhit()){
         
            caracter[i]=getch();
        
        if(caracter[0]==62)
              {
                 if(caracter[i]==62 || caracter[i]==60 || caracter[i]>=48 && caracter[i]<=57 || caracter[i]>=97 && caracter[i]<=122 || caracter[i]>=65 && caracter[i]<=90 || caracter[i]==59 || caracter[i]==13){
                     printf("%c",caracter[i]);
                     if(caracter[i]==13){
                     calculo=1;
                 }
                 i++;
                 bandera1=0;
             }
         }
   }
   
   if(caracter[1]==13)
   {
      clean(&numero1,&numero2,&operacion,&puntero,&i,&calculo,&resultado);
            for( clear=0; clear<22;clear++){
                if(caracter[clear]!=0){
                    caracter[clear]=0;
                    cadena[clear]=0;
               }
               j=0;
               puntero2=0;
               numero3=0;
               cont=0;
               cont2=0;
            }
   }

   
   if(calculo==1){//-1+2=
            
            while(caracter[puntero]!=59)
               {
                  puntero++;
                  cadena[puntero2]=caracter[puntero];
                  if(cadena[puntero2]==59)
                     cadena[puntero2]=null;
                  puntero2++;
               }
               numero1=operacion2(caracter,puntero,flag,numero1);
               puntero=operacion3(caracter,puntero,flag,numero1);
               
               
               if(numero1>9 || numero1 < 0 || puntero2>10)
               {
                  printf("extension de la palabra o numero invalido \r\n");
                           clean(&numero1,&numero2,&operacion,&puntero,&i,&calculo,&resultado);
                     for( clear=0; clear<22;clear++){
                         if(caracter[clear]!=0){
                             caracter[clear]=0;
                             cadena[clear]=0;
                        }
                        j=0;
                        puntero2=0;
                        numero3=0;
                     }
               }
               
               
                

              i=0;
              calculo=0;
           
           
   }

      //TODO: User Code
   }

}
