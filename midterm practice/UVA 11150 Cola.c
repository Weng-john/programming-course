#include <stdio.h>
#include <stdlib.h>

int main()
{
        int N;
        while(scanf("%d", &N)!=EOF){
                int sum=N;
                while(1){
                        if(N<3)
                                break;
                        sum += N/3;
                        N= N/3+N%3;
                }
                if(N==2)
                        sum++;
                printf("%d\n", sum);
        }
        return 0;
}
