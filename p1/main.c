
#include <stdio.h>

int main(void)
{
    int correct = 0, answer = 0;
    scanf("%d", &correct);
    do {
        scanf("%d", &answer);
        if(answer > correct) printf("%d>?\n", answer);
        else if(answer < correct) printf("%d<?\n", answer);
        else printf("%d==?", answer, correct);
    } while(answer != correct);
    return 0;
}
