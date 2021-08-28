#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    int j=0;
    int *clone;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    clone = (int*) malloc(num * sizeof(int));
    
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
        clone[i] = arr[i];
    }

    for(int i=(num-1); i>=0;i--){
        arr[j] = clone[i];
        j++;
    }
    free(clone);
    
    for(i = 0; i < num; i++){
        printf("%d ", *(arr + i));
	}
	
	return 0;
}

