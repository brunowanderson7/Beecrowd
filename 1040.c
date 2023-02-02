#include <stdio.h>
 
int main() {
 
    float n1, n2, n3, n4, mp;
    scanf("%f%f%f%f", &n1, &n2, &n3, &n4);
    
    mp = ((n1*2) + (n2*3) + (n3*4) + (n4*1));
    mp = mp / 10;
    
    if (mp < 5){
        printf("Media: %.1f\nAluno reprovado.\n", mp);

    } else if (mp >= 7){
        printf("Media: %.1f\nAluno aprovado.\n", mp);

    } else{
        printf("Media: %.1f\nAluno em exame.\n", mp);
        scanf("%f", &n1);
        mp += n1;
        mp /= 2;

        if (mp < 5){
            printf("Nota do exame: %.1f\nAluno reprovado.\nMedia final: %.1f\n", n1, mp);
        } else{
            printf("Nota do exame: %.1f\nAluno aprovado.\nMedia final: %.1f\n", n1, mp);
        }
    }
    return 0;
}