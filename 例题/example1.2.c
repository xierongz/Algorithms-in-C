//例题1.2 连通问题的快速合并算法
/*****************************************
- 从标准输入读取小于N的非负整数对序列，（对
- p-q表示“把对象p连接到q”），并且输出还未
- 连通的输入对。
- 当且仅当p和q是连通的，id[p]和id[q]相等。
- 该算法合并操作的计算时间较短，查找操作的
- 计算时间更长。
*****************************************/

#include <stdio.h>
#define N 10000

int main()
{
    int i, j, p, q, id[N];
    for(i=0; i<N; i++)
        id[i] = i;
/*****************************************
    1.scanf是有返回值的，返回值就是正确读取
    的值的个数，失败返回EOF(通常是一个被定
    义为-1的宏）
    2."%d %d\n"中间的空格可有可无，末尾的回
    车可能是用于接收掉回车，以免回车字符被循
    环体内接受字符的函数读入。
*****************************************/
    while(scanf("%d %d\n", &p, &q) == 2)
    {
        for(i=p; i!=id[i]; i=id[i]);
        for(j=q; j!=id[j]; j=id[j]);
        if(i == j)
            continue;
        id[i] = j;
        printf(" %d %d\n", p, q);
    }
    return 0;
}
