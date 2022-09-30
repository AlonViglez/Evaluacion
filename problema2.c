/*Jesus Alonso Villa Gonzalez 3D
 *Ingenieria de Software
 *Estructura de Datos
 */


#include <stdio.h>
#include <math.h>


int recursiva(int i)
  {
   int res=0;
   if(i>0)
     {
   	return res=5*pow(3,i-1); 
     }
   else
     {
   	return 0;
     }
  }


int main()
  {
   int n=0;
   int res=0;
   printf("Ingrese el numero de iteraciones: ");
   scanf("%d",&n);

   for(int i=1; i<=n; i++)
     {
      res=recursiva(i);
      printf("%d,",res);
     }
   printf("\n");
   printf("Numero de repeticiones = %d\n",n);
   return 0;
  }
