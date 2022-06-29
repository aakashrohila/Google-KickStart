#include<stdio.h>
#include<string.h>

int main()
{
    int test_cases;
    scanf("%d",&test_cases);
    int m = 0;
    while(test_cases--)
    {
        m++;
        int N,Q,i,L,R, count = 0,j;
        scanf("%d %d",&N,&Q);

        char str[N+1], cp_str[N+1];
        scanf("%s",str);

        
        
        for(i=0;i<Q;i++)
        {
            int flag = 0,temp = 1;
            int alpha_array[91] = {0};
            scanf("%d %d",&L,&R);

            //To set default value of a block of memory
            memset(cp_str,'\0',sizeof(cp_str));
            
            //To copy a particular substring from original string
            strncpy(cp_str,&str[L-1],R-L+1);

            for(j=0;cp_str[j]!='\0';j++)
            {
                alpha_array[cp_str[j]]++;
                //printf("%d ",cp_str[j]);
            }

            int length = strlen(cp_str);

            if(length%2 ==0)
            {
                for(j=65;j<91;j++)
                {
                    //printf("--%d ",j);
                    if(alpha_array[j]%2==0 || alpha_array[j]==0)
                        continue;
                    
                    else
                    {
                        flag = 1;
                        break;  
                    }
                }
                if(flag != 1)
                    count++;
            }

            else if(length%2 !=0 ) 
            {
                for(j=65;j<91;j++)
                {
                    //printf("--%d ",alpha_array[j]);
                    if(alpha_array[j]%2==0 || alpha_array[j]==0)
                    {
        
                        continue;
                    }

                    else if(alpha_array[j]%2 != 0 && temp==1){
                            temp--;
                            continue;
                    }
                        
                    else if(alpha_array[j]==1 && temp==1)
                    {
                        temp--;
                          continue;
                    }

                    else
                    {
                            flag = 1;
                            break;
                    }
                    
                }
                if(flag != 1)
                    count++;
            }
        }

    printf("Case #%d: %d\n",m,count);
    }
    return 0;
}

/*

1
7 5
ABAACCA
3 6
4 4
2 5
6 7
3 7

1
3 5
XYZ
1 3
1 3
1 3
1 3
1 3

*/