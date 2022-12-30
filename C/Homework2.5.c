#include <stdio.h>

int main()
{
    int sum = 1;
    
    for (int i = 0; i < 4; i++) {

        sum *= 2;
        
    }
   
    printf("%d", sum);
    
    return 0;
}