#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    int at;
    int bt;
    int ct;
    int tat;
    int wt;
    int rt;
} data;

int compare (const void * a, const void * b)
{
  data *data_1 = (data *)a;
  data *data_2 = (data *)b;
  if( data_1->at == data_2->at)
  {
      return data_1->at - data_2->at;
  }
  else if( data_1->at < data_2->at)
    return -1;
  else
    return 1;
}

int main ()
{
    int i = 0, num = 5;
    data arr[num];
    for(i=0; i < num; i++)
    { 
        int a,b;
        scanf("%d",&a);
        scanf("%d",&b);
        arr[i].at = a;
        arr[i].bt = b;    
    }
    qsort (arr, num, sizeof(data), compare);
    arr[0].ct = arr[0].at+arr[0].bt;
    arr[0].tat = arr[0].ct - arr[0].at;
    arr[0].wt = arr[0].tat - arr[0].bt;
    arr[0].rt = arr[0].wt + arr[0].at;
    
    for(int i=1;i<num;i++)
    {
        int aagya;
        if(arr[i-1].ct > arr[i].at)
        {
            aagya = arr[i-1].ct ;
        }
        else
        {
            aagya = arr[i].at;
        }
    arr[i].ct = aagya+arr[i].bt;
    arr[i].tat = arr[i].ct - arr[i].at;
    arr[i].wt = arr[i].tat - arr[i].bt;
    arr[i].rt = arr[i].wt + arr[i].at;
    }
    for(int i=0;i<num;i++)
    {
        printf("%d %d %d %d %d %d\n",arr[i].at,arr[i].bt,arr[i].ct,arr[i].tat,arr[i].wt,arr[i].rt);
    }
    return 0;
}
