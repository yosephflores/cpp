#include <stdio.h>
#include <iostream>
#include <cstdlib>
main(int argc, char* argv[])
{
      /*variables*/
      int a,b,c,may,men,med;
      
      /*Ingresar datos*/
      printf("DETERMINAR QUE LETRA O NUMERO ES MAYOR, MEDIO, MENOR O SI EXISTE ALGUNA IGUALDAD");
      printf("\n\n\t\tIngresar la a: ");
      scanf("%d",&a);
      printf("\t\tIngresar la b: ");
      scanf("%d",&b);
      printf("\t\tIngresar la c: ");
      scanf("%d",&c);
            
      /*condiciones --- bloque mayor*/
      may=a;
      if (b>may)
         may=b;      
      if (c>may)
         may=c;      
          
      /*condiciones --- bloque menor*/
      men=a;
      if (b<men)
         men=b;      
      if (c<men)
         men=c;      
            
       /*condiciones --- bloque medio*/
      if(may>a && a>men)
         med=a;
      if(may>b && b>men)
         med=b;
      if(may>c && c>men)
         med=c;
        
      /*Condicionar la igualdad y Escribir en pantalla*/
      
      if(a==b && a==c && b==c) 
               printf("\n\n\t\t\tLos tres numeros (a,b, y c) son iguales\n"); 
           else if(a==b) 
               //printf("\n\nEl primero y el segundo son iguales %d\n",a<c ? c : a);
               a<c ? printf("\n\nEl primero (a) \"%d\" y el segundo (b) \"%d\" son iguales, y el tercero \"%d\" es el mayor\n",a,b,c) : printf("\n\nEl primero \"%d\" y el segundo \"%d\" son iguales, y el tercero \"%d\" es el menor\n",a,b,c);  
           else if(a==c) 
               //printf("\n\nEl primero y el tercero son iguales\n");
               a<b ? printf("\n\nEl primero (a) \"%d\" y el tercero (c) \"%d\" son iguales, y el segundo \"%d\" es el mayor\n",a,c,b) : printf("\n\nEl primero \"%d\" y el tercero \"%d\" son iguales, y el segundo \"%d\" es el menor\n",a,c,b);     
           else if(b==c) 
               //printf("\n\nEl segundo y el tercero son iguales\n");  
               b<a ? printf("\n\nEl segundo (b) \"%d\" y el tercero (c) \"%d\" son iguales, y el primero \"%d\" es el mayor\n",b,c,a) : printf("\n\nEl segundo \"%d\" y el tercero \"%d\" son iguales, y el primero \"%d\" es el menor\n",b,c,a);
           else{ 
                printf("\n\n\n\t\tEl numero mayor es ===> %d",may);
                printf("\n\t\tEl numero medio es ===> %d",med);
                printf("\n\t\tEl numero menor es ===> %d",men);  
                }
      
            
      getchar();
      getchar();
      return 0;
}
