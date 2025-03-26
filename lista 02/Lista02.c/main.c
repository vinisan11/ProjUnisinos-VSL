
#include <stdio.h>

int main()
{
    printf("Progrma de soma a + b +c \n");
    int a = 2;
    int b = 5;
    int c = 3;
    
    int soma_a_b = a + b;
    
    int soma_a_c = a + c;
    
    if (soma_a_b < soma_a_c){
        printf("Soma a + b menor que a + c");
    }else{
        printf("Soma a + b maior que a + c");
    }
  
    

    return 0;
}
