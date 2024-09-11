#include <stdio.h>
 
int main() 
{    
    int i = 1, j = 0;
   
    int rows = 5;
   
    char character = 'A';
   
    while (i <= rows) 
    {
        while (j <= i - 1) 
        {
            printf("%c ",character);
            j++;
           
            character++;
        }
        printf("\n");
 
        j = 0;
        i++;
    }
    return 0;
}