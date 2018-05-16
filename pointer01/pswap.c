#include <stdio.h>


int p_swap(char* p1, char* p2)
{
    char* temp;
    temp = p1;
    p1 = p2;
    p2 = temp;

    return 0;
}

int dp_swap(char** p1, char** p2)
{
    char* temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    return 0;
}

int main(void)
{
    int index = 0;

    char t1[4] = {'d','o','g',0};
    char t2[4] = {'c','a','t',0};

    char* tp = t1;
    char* tq = t2;

    printf("[%d], tp=[%s], tq=[%s]\n", index++, tp, tq);

    p_swap(tp, tq);

    printf("[%d], tp=[%s], tq=[%s]\n", index++, tp, tq);

    dp_swap(&tp, &tq);

    printf("[%d], tp=[%s], tq=[%s]\n", index++, tp, tq);

    return 0;
}
