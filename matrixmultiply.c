//Name-Shivansh Gairola
//Unique ID-20011506
//Question:-4
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m, n, p, q;
    printf("Enter the dimensions of first array\n");
    scanf("%d%d", &m, &n);
    int arr1[m][n];
    printf("Enter the elements of the first array\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter the dimensions of the second array\n");
    scanf("%d%d", &p, &q);
    int arr2[p][q];
    printf("Enter the elements of the second array\n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    if (n != p)
    {
        printf("Invalid input");
        exit(0);
    }
    int arr[m][q];
    for (int k = 0; k < m; k++)
    {
        for (int i = 0; i < q; i++)
        {
            int sum = 0;
            for (int j = 0; j < n; j++)
            {
                sum = sum + (arr1[k][j] * arr2[j][i]);
            }
            arr[k][i] = sum;
        }
    }
    printf("Shivansh Gairola\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<q;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
