# SentinelValue
In this C program, we work with a Sentinel Value or Flag value: Flag. A While loop is used on this value and while this Alert value is maintained, the program will continue in execution.
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
