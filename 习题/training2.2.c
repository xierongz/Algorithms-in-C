//��ϰ2.2
/*********************************************
- ��1����1,000,000,000��Ҫ�೤ʱ��(���������)��
- ����N=10��100��1000����¼��������л����зֱ�
- �������³��������ѵ�ʱ�䡣�����ı��������Ż�
- ���ԣ����ٶ���ʹ�������Ч�������Ƿ�Գ�����
- ���Ż���
**********************************************/

#include <stdio.h>
#include <time.h>

int count(int n)
{
    int i,j,k,count = 0;
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            for(k=0; k<n; k++)
                count++;
    return count;
}

int main()
{
    int mycount,N;
    N = 10;
    clock_t start,finish;
    double total_time;
    start = clock();
    mycount = count(N);
    finish = clock();
    total_time = (double)(finish - start) / CLOCKS_PER_SEC;
    printf("When N=%d,count = %d\ntime:%.6lf seconds\n",N,mycount,total_time);
    return 0;
}
