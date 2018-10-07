//练习2.2
/*********************************************
- 从1数到1,000,000,000需要多长时间(不考虑溢出)？
- 对于N=10，100和1000，记录在你的运行环境中分别
- 运行以下程序所花费的时间。如果你的编译器有优化
- 特性，并假定可使程序更高效。请检查是否对程序作
- 了优化。
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
