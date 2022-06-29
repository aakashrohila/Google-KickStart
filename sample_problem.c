#include<stdio.h>

int main()
{
    int test_cases;
    scanf("%d",&test_cases);
    int m=1;

    while(test_cases--)
    {
        int N,M,sum = 0;
        scanf("%d %d",&N,&M);
        
        int arr[N],i;
        for(i=0;i<N;i++)
        {
            scanf("%d",&arr[i]);
            sum += arr[i];
        }
        
        sum = sum - (sum/M)*M;
        printf("Case #%d: %d\n",m,sum);
        m++;
        
    }
    
    return 0;
}
