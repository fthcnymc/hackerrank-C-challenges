#include <stdio.h>

int max_of_four(int a, int b, int c, int d){
    
    int max_gr;
    int max_gr1;
    int max;
    
    if(a >= b){
        max_gr = a;    
    }
    
    else if(a < b){
        max_gr = b;
    }
    
    if(c >= d){
        max_gr1=c;
    }
    
    else if(c < d){
        max_gr1=d;
    }
    
    if(max_gr>max_gr1){
        return max_gr;
    }
    else{
        return max_gr1;
    }
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

