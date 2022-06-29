#include <stdio.h>

int main()
{
    int test_cases;
    scanf("%d",&test_cases);
    int m=1;
    while(test_cases--)
    {
        unsigned long long L,R;
        unsigned long long ans;
        scanf("%d %d",&L,&R);
        
        if(L==0 || R==0)
            printf("Case #%d: %d\n",m,0);

        else{

            L = (L<=R?L:R);
            ans = L*(L+1)/2;
            printf("Case #%d: %llu\n",m,ans);
        }
        
        m++;
    }
    return 0;
}
