
#include <stdio.h>

int main(void)
{
    int correct = 0, answer = 0, count = 0;
    scanf("%d", &correct);
    do {
        scanf("%d", &answer);
        if(answer > correct) printf("%d>?\n", answer);
        else if(answer < correct) printf("%d<?\n", answer);
        else printf("%d==?\n", answer, correct);
        count++;
    } while(answer != correct);
    printf("%d", count);
    return 0;
}
