#include <stdio.h>
#include <stdlib.h>

int GCD(int a, int b){
        while(a){
                b= b%a;

                int tmp= b;
                b= a;
                a= tmp;
        }
        return b;
}

int main()
{
        int N;
        while(scanf("%d", &N)!=EOF && N){
                int sum=0;
                for(int i=1;i<N;i++){
                        for(int j=i+1;j<=N;j++){
                                sum += GCD(i, j);
                        }
                }
                printf("%d\n", sum);
        }
        return 0;
}
