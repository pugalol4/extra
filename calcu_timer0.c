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
int contadorGlobal1=1, cont=0;
int contadorGlobal2=1;
int contadorGlobal3=1;
int contInt3=0;


#INT_TIMER0
void TIMER0(){
   contadorGlobal1*=2;
   if(cont%3==0)
   contadorGlobal2*=2;
   if(cont%5==0)
   contadorGlobal3*=2;
   contInt3++;
   cont++;
   if(cont==15)
      cont=1;
   set_timer0(3036);
}


void main()
{
   setup_timer_0(RTCC_INTERNAL | RTCC_DIV_8  );
   enable_interrupts(INT_TIMER0 );
   enable_interrupts(GLOBAL);
   
   set_timer0(3036);

   printf("\fIngresa los datos siguiendo el orden dato,dato,operacion=\n");
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
            }
   }
   
      if(contadorGlobal3==128 && contInt3>=1)
      {
         printf("%s"cadena);
         contInt=0;
      }
      
      if(contadorGlobal1==4 && contInt>=1 || contadorGlobal1==8 && contInt>=1)
      {
         printf("%s"cadena);
         contInt=0;
      }
  /* if(caracter[i-1]=='=')
   {
         numero1=calcular1(caracter,puntero,flag,numero1,operacion,decimal1);
      numero2=calcular2(caracter,puntero,flag,numero2,operacion,decimal2);
   }*/
   
   if(calculo==1){//-1+2=
            
               numero1=operacion2(caracter,puntero,flag,numero1);
               puntero=operacion3(caracter,puntero,flag,numero1);
               numero2=operacion2(caracter,puntero,flag,numero2);
               puntero=operacion3(caracter,puntero,flag,numero2);
               numero3=operacion2(caracter,puntero,flag,numero3);
               puntero=operacion3(caracter,puntero,flag,numero2);
               while(puntero<(i-3))
               {
                  puntero++;
                  cadena[puntero2]=caracter[puntero];
                  puntero2++;
               }
               
               
               
                
                
                
                printf("%s"caracter);
                printf("%d , %d , %d , %s"numero1,numero2,numero3,cadena);
              // impresion y limpieza de variables ._.
              // clean();
              i=0;
              calculo=0;
             /* clean(&numero1,&numero2,&operacion,&puntero,&i,&calculo,&resultado);
            for( clear=0; clear<22;clear++){
                if(caracter[clear]!=0){
                    caracter[clear]=0;
                    cadena[clear]=0;
               }
               j=0;
               puntero2=0;
               numero3=0;
            }
            */
           
   }
output_a(contadorglobal1);
   if(contadorglobal1==256)
      contadorglobal1=1;
   output_b(contadorglobal2);
   if(contadorglobal2==256)
      contadorglobal2=1;
   output_d(contadorglobal3);
   if(contadorglobal3==256)
      contadorglobal3=1;
      //TODO: User Code
   }

}
