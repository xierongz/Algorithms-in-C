//例题1.3 加权快速合并算法
//这是快速合并算法(example1.2.c)的一个改进
/***********************************************
- 用另一个数组sz记录每个id[i] == i的对象所在树中的
- 节点数，使得合并操作能够把较小的树连接到较大的树
- 上，以防止树中长路径的增长
************************************************/

#include <stdio.h>

#define N 10000

int main()
{
    int i,j,p,q,id[N],sz[N];
    for(i=0; i<N; i++)
    {
        id[i] = i;
        sz[i] = 1;
    }
    while (scanf("%d %d\n",&p,&q) == 2)
    {
        for(i=p; i!=id[i]; i=id[i]);
        for(j=q; j!=id[j]; j=id[j]);
        if(i == j) continue;
        if(sz[i] < sz[j])
        {
            id[i] = j;
            sz[j] += sz[i];
        }
        else
        {
            id[j] = i;
            sz[i] += sz[j];
        }
        printf("%d %d\n",p,q);
    }
    return 0;
}
