#include <stdio.h>
#include <stdlib.h>

int f(int num){
        if(num<10)
                return num;

        int sum=0;
        while(num){
                sum += num%10;
                num= num/10;
        }
        return f(sum);
}

int main()
{
        int input;
        while(scanf("%d", &input)!=EOF && input)
                printf("%d\n", f(input));

        return 0;
}
