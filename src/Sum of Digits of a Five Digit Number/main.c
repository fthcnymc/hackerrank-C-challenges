#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    int digits[5];
    int steps[4] = {10000,1000,100,10};
    int temp;
    int sum = 0;
    temp =n;
    for(int i=0;i<4;i++){
        digits[i] = temp / steps[i];
        temp = n % steps[i]; 
        sum += digits[i];
        
        if(10 == steps[i]){
            sum += temp;
        }
    }
    printf("%d",sum);

    return 0;
}

