#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

char num[10000];

int main()
{
        while(scanf("%s", num)!=EOF && (num[0]-'0')){
                int even=0, odd=0;

                for(int i=0;i<strlen(num);i++){
                        if(i%2)
                                odd += num[i]-'0';
                        else
                                even += num[i]-'0';
                }
                if(abs(even-odd)%11)
                        printf("%s is not a multiple of 11.\n", num);
                else
                        printf("%s is a multiple of 11.\n", num);

                memset(num, '\0', 10000*sizeof(char));
        }
        return 0;
}
