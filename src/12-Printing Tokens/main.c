#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    char *sep;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    sep = strtok(s," ");
    
    while(sep != NULL){
        printf("%s\n",sep);
        sep = strtok(NULL," ");    
    }
    
    return 0;
}

