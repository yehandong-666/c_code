#include<stdio.h>
int main(void)
{
    int a,b,c;
    printf("��Ǯ��ټ��������п��ܵĽ�����:\n");

    for ( a = 0; a <100; a++)

    for ( b = 0; b <100; b++)
   
    for ( c = 0; c <100; c++)

    if (5*a+3*b+c/3==100&&a+b+c==100&&c%3==0)
    {
        printf("����%2dֻ��ĸ��%2dֻ��С��%2dֻ\n",a,b,c);
    }
    
    return 0;
}