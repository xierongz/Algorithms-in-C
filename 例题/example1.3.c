//����1.3 ��Ȩ���ٺϲ��㷨
//���ǿ��ٺϲ��㷨(example1.2.c)��һ���Ľ�
/***********************************************
- ����һ������sz��¼ÿ��id[i] == i�Ķ����������е�
- �ڵ�����ʹ�úϲ������ܹ��ѽ�С�������ӵ��ϴ����
- �ϣ��Է�ֹ���г�·��������
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
