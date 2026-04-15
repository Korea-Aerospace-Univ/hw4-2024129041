#include <stdio.h>

int main(void)
{
    int N = 0, engcount = 0, intcount = 0, max_engcount = 0, max_intcount = 0; /*문자 자리수 변수N, 연속된 영어 소문자 개수를 
        세는 engcount, 연속된 정수를 세는 intcount, 연속된 영어와 정수의 최대 개수를 저장하기 위한 변수  max_engcount, max_intcount
        선언과 초기화*/
    char ch = ' ';  //scanf로 받을 문자를 저장하기 위한 변수 선언과 초기화
    scanf("%d", &N); //문자 자리수 받아서 N에 저장
    for(int i = 1;i <= N;i++){/*N번동안 각 자리의 문자가 정수인지 영어 소문자인지 구분하는 것을 반복하는 for문 생성, 
    문자 자리수가 N개이므로 N번 반복해야하므로 초기값 i=1 부터 N까지 반복되도록 조건을 i <= N으로 설정*/
        scanf(" %c", &ch);/*문자 1개 받아서 이를 아레 if else 문에서 영어소문자인지 정수문자인지 보기,
        이때 for문 위의 scanf로 인해서 for문 아래 scanf는 개행문자를 받기 때문에 이를 무시하기 위해서
        for문 아래 scanf괄호""안에 띄어쓰기로 시작해서 이를 무시*/
        if (ch >= 'a' && ch <= 'z') {//받은 ch값이 'a'와 'z'사이에 존재한다면 ch는 영어 소문자
            intcount = 0;//for문안에서 계속 반복되기때문에, 지금 영어 소문자 다음에 정수문자가 오는 경우 다음 정수문자의 연속된 개수를
            세기 위해 이전의 연속된 정수개수를 0으로 초기화해주는 작업
            ++engcount;//연속된 소문자 개수를 세기위한 코드
            if (engcount > max_engcount) max_engcount = engcount;/*연속된 영어 소문자 개수를 세고 이를 영어 소문자 최대개수와
            비교해서 이전에 저장된 최대개수max_engcount 보다 클때만 현재까지 센 영어 소문자 개수를 최대 개수를 바꿔서 저장하는 코드*/
        }
        else if (ch >= '0' && ch <= '9') {//ch문자가 정수일 조건은 ch값이 '0'에서 '9'사이일때만
            engcount = 0;/*정수문자 다음 영어 소문자가 왔을때, 연속된 영어 소문자 개수를 새로 세야하기 
            때문에 문자가 정수일때 조건에서 다음에 영어소문자가 나오기전에 미리 영어소문자개수를 0으로 초기화 필요*/
            ++intcount;//연속된 정수 개수를 세는 코드
            if (intcount > max_intcount) max_intcount = intcount;/*연속된 정수 개수를 저장한 incount가 
                기존 연속된 정수의 최대개수보다 클때만 이를 바꿔주는 코드*/
        }
    }
    printf("%d\n", max_engcount);//연속된 영어 소문자의 최대개수를 저장한 변수 max_engcount 출력, 개행
    printf("%d", max_intcount);//연속된 정수의 최대개수를 저장한 변수 max_intcount 출력
    return 0;//종료
}
