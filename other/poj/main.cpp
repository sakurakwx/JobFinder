#include <iostream>
#define SIZE 101
 
using namespace std;
 
int a[SIZE][SIZE];
 
/* 最大子段和 */
int MaxSubArray(int n, int* a)
{
    int max = 0;
    int b = 0;
    for (int i = 0; i < n; i++)
    {
        if (b > 0) b += a[i];
        else b = a[i];
        if (b > max) max = b;
    }
    return max;
}
 
/* 最大子矩阵和 */
int MaxSubMatrix(int m, int n)
{
    int i, j, k, sum;
    int max = 0;
    int b[SIZE];
    /* i为起始行 */
    for (i = 0; i < m; i++)
    {
        /* 起始行改变才初始化b[] */
        for (k = 0; k < n; k++)
        {
            b[k] = 0;
        }
        
        /* 从第i行加到最后一行 */
        for (j = i; j < m; j++)
        {
            /* 每次把第j行的数都加起来 */
            for (k = 0; k < n; k++)
            {
                b[k] += a[j][k];
            }
            
            /* 求出加和的最大子段和 */
            sum = MaxSubArray(k, b);
            if (sum > max)
            {
                max = sum;
            }
        }
    }
    return max;
}
 
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << MaxSubMatrix(n, n) << endl;
    //system("pause");
    return 0;
}