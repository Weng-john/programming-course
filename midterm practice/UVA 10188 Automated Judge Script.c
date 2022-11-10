#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

const char status[][100]= {"Accepted", "Presentation Error", "Wrong Answer"};
char standerd[100][125];
char Output[100][125];
char standNum[100][120], outNum[100][120];

int main()
{
        int n, m, round=1;
        while(scanf("%d", &n)!=EOF && n){
                getchar();

                int i;
                for(i=0;i<n;i++)
                        gets(standerd[i]);
                scanf("%d", &m);
                getchar();
                for(i=0;i<m;i++)
                        gets(Output[i]);

                if(n-m){
                        printf("Run #%d: %s\n", round++, status[2]);
                        continue;
                }

                memset(standNum, '\0', 100*120*sizeof(char));
                memset(outNum, '\0', 100*120*sizeof(char));
                int diff=0;
                for(i=0;i<n;i++){
                        int j;
                        for(j=0;j<strlen(standerd[i]);j++){
                                if(standerd[i][j]==Output[i][j])
                                        continue;
                                diff++;
                        }
                }

                if(diff){
                        int i, diff=0;
                        for(i=0;i<strlen(standerd);i++){
                                int j;
                                for(j=0;j<strlen(standerd[i]);j++)
                                        if(standerd[i][j]<='9'&&standerd[i][j]>='0')
                                                standNum[i][strlen(standNum[i])]= standerd[i][j];
                                for(j=0;j<strlen(Output[i]);j++)
                                        if(Output[i][j]<='9'&&Output[i][j]>='0')
                                                outNum[i][strlen(outNum[i])]= Output[i][j];
                        }
                        for(i=0;i<n;i++){
                                int j;
                                for(j=0; j<strlen(standNum[i]); j++)
                                        if(standNum[i][j]!=outNum[i][j])
                                                diff++;
                        }
                        if(diff)
                                printf("Run #%d: %s\n", round++, status[2]);
                        else
                                printf("Run #%d: %s\n", round++, status[1]);
                }
                else
                        printf("Run #%d: %s\n", round++, status[0]);

                memset(standerd, '\0', 100*125*sizeof(char));
                memset(Output, '\0', 100*125*sizeof(char));
        }
        return 0;
}
