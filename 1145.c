#include <stdio.h>
 
int main() {
 
    int x, y;
    scanf("%d%d", &x, &y);
    for (int l = 1; l <= y; ){
        
        for (int j = 1; j < x && l <= y; j++, l++){
            printf("%d ", l);
        }
        if(l <= y){
            printf("%d\n", l);
            l++;
        }
    }
 
    return 0;
}