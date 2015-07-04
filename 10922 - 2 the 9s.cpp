/*#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
    char a[101010];
    while(gets(a)){
        if(strcmp(a, "0")==0)
            break;
        int sum = 0;
        int len = strlen(a);
        for(int i = 0; i<len; i++){
            sum +=a[i] - '0';
        }
        if(sum%9!=0){
            printf("%s is not a multiple of 9.\n", a);

        }

     else{
        int cnt = 1;
        while(sum>9){
            cnt++;
            len = 0;
        while(sum>0){
         len +=sum%10;
        sum =sum/10;
        }
        sum = len;
        }
     printf("%s is a multiple of 9 and has 9-degree %d.\n", a, cnt);

    }
 }

    return 0;
}
*/


#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
char a[1000010];
int main()
{
    while(gets(a)){
         if(strcmp(a, "0")==0 )
       break;
        int len = strlen(a);
        int sum = 0;
        for(int i = 0; i<len; i++){
            sum +=a[i] - 48;
        }
        if(sum%9!=0){
            printf("%s is not a multiple of 9.\n", a);
        }
        else
        {
            int cnt = 1;
            while(sum>9){
                cnt++;
                len = 0;
                while(sum>0){
                    len +=sum%10;
                    sum/=10;
                }
                sum = len;
            }
            printf("%s is a multiple of 9 and has 9-degree %d.\n", a, cnt);

        }
    }


    return 0;
}
