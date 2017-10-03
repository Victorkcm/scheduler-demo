#include <stdio.h>
#include <stdlib.h>

int main ()
{
  int i,n,t,aux,j,in[6];
  
  
  for (i=0;i<6;i++)
  {
    scanf ("%d", &in[i]);
  }
  
  n=in[5];
  

  for (t=1; t<=n ;t++)
  {
    aux=0;
   for (j=0; j<5; j++)
   {
     if (t%in[j]==0)
      { 
	aux=1;
	printf ("%d",j); 
      }
      
   }
   
   if (aux==0)
       printf ("-");
   printf ("\n");
  }
  
 
    
  system ("pause");
  return 0;
}