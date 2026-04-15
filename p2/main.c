#include <stdio.h>

int main(void)
{
    int N = 0, engcount = 0, intcount = 0, max_engcount = 0, max_intcount = 0;
    char ch = ' ';
    scanf("%d", &N);
    for(int i = 1;i <= N;i++){
        scanf("%c", &ch);
        if (ch >= 'a' && ch <= 'z') {
            intcount = 0;
            ++engcount;
            if (engcount > max_engcount) max_engcount = engcount;
        }
        else if (ch >= '0' && ch <= '9') {
            engcount = 0;
            ++intcount;
            if (intcount > max_intcount) max_intcount = intcount;
        }
    }
    printf("%d\n", max_engcount);
    printf("%d\n", max_intcount);
    return 0;
}
