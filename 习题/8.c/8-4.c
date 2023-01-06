#include <stdio.h>
int main(void)
{
    int count, i, j, m, n;
    int num[80] = {0};
    printf("Enter n:");
    scanf("%d", &n);
    printf("Enter m:");
    scanf("%d", &m);
    i = j = count = 0;
    while (count < n - 1)
    {
        if (num[i] == 0)
            j++;
        if (j % m == 0 && j)
        {
            count++;
            num[i] = -1;
            j = 0; //报数报到m后，j重归0，开始下次报数
        }
        i++;    //读取下一个元素
        i %= n; //一次n个跟报完数，开始下一次(除余n是因为i是下标,从0开始,n是具体数
                //从1开始
    }           //i为n时下次a[0]报数)for(i=0;i<n;i++)
    if (num[i] == 0)
    {
        printf("Last No is: %d\n",i + 1);
    }
    return 0;
}
