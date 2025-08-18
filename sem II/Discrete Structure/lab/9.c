#include <stdio.h>

int main() {
    int p, q;
    printf("p q pANDq pORq pXORq\n");
    for(p=0;p<=1;p++){
        for(q=0;q<=1;q++){
            printf("%d %d %d %d %d\n", p, q, p&&q, p||q, p^q);
        }
    }
    return 0;
}
