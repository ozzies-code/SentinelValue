#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{   
    int flag = 1, contador = 0;

    while(flag) 
    {
      contador++;    
      if(contador > 10)
      break;
    }
   printf("Contador: %d \n", contador);
   system("PAUSE");	
  return 0;
}
