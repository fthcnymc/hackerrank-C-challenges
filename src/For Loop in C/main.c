#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	int i;
    char *array[10] = {"zero","one","two","three", "four","five","six","seven","eight","nine"};
    
    for(i = a; i<(b+1); i++){
        
        if(i < 10){
            printf("%s\n",array[i]);
        }
        
        else{
            if(0 == i%2){
                printf("even\n");
            }
            else{
                printf("odd\n");
            }
        }
    }   
    
    return 0;
}


