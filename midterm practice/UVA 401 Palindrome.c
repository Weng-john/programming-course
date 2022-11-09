#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char text[]= "ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
const char Reverse[]= "A   3  HIL JM O   2TUVWXY51SE Z  8 ";

int main()
{
        char s[21];
        while(scanf("%s", s)!=EOF){
                int mirror=0, palin=0, mp=0;
                int mirSame=0, paSame=0, mirself=0;
                for(int i=0, j=strlen(s)-1; i<strlen(s); i++, j--){
                        int index;
                        if(s[i]<'A')
                                index= s[i]-'1'+26;
                        else
                                index= s[i]-'A';

                        if(s[j]==s[i])
                                paSame++;
                        if(Reverse[index]==s[j])
                                mirSame++;
                        if(Reverse[index]==text[index])
                                mirself++;
                }
                if(paSame==strlen(s))
                        palin=1;
                if(mirSame==strlen(s))
                        mirror=1;
                if(mirself==strlen(s))
                        mp=1;

                if(palin && mp)
                        printf("%s -- is a mirrored palindrome.\n\n", s);
                else if(palin && !(mirror))
                        printf("%s -- is a regular palindrome.\n\n", s);
                else if(!(palin) && mirror)
                        printf("%s -- is a mirrored string.\n\n", s);
                else if(!(palin) && !(mirror))
                        printf("%s -- is not a palindrome.\n\n", s);
        }
        return 0;
}
