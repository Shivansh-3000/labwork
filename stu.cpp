#include <iostream>
using namespace std;

bool ser(int arr[],int v,int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==v)
        return 1;
    }
    return 0;
}

int main()
{
    int n;
    printf("Enter the size : ");
    scanf("%d",&n);
    int ans[n];
    printf("Enter the number of pages : ");
    int m,v,ptr=0,c=0;
    scanf("%d",&m);
    for(int i=0;i<m;i++)
    {
        scanf("%d",&v);
        if(i<n)
        {
            ans[i] = v;
        }
        else
        {
            if(ser(ans,v,n))
            {
                c++;
            }
            else
            {
                ans[ptr%n] = v;
                ptr++;
            }
        }
    }
    printf("%d",(m-c));
    return 0;
}


