#include <stdio.h>
#include "fb.h"
int main(){
 	int i;
    printf("nhung so trong day fibonacci < 100 la : \n");
    for (i = 0; i < 12; i++) {
        printf("%d ", f(i));
    }
}
