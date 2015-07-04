#include<stdio.h>
#include<string.h>
int main()
{
    char s[1021];
    while(gets(s)){
        int len = strlen(s);
    if(s[0] == '0' && len == 1)
            break;
            
    int p = 0, m = 0, i, j;
    for(i = 0; i<len; i+=2)
        p += s[i] - '0';
    for(j = 1; j<len; j+=2)
        m +=s[j] - '0';
    int mul = p - m;
    if(mul%11==0)
        printf("%s is a multiple of 11.\n", s);
    else
        printf("%s is not a multiple of 11.\n", s);
     }

    return 0;
}

/*#include<stdio.h>
#include<string.h>

static char s[1024];

int main(){
    unsigned i;

    while(gets(s)){
        unsigned len = strlen(s);
        if(s[0] == '0' && len == 1)
            return 0;

        int sum = 0;
        for(i = 0; i < len; i += 2)
            sum += s[i] - '0';

        for(i = 1; i < len; i += 2)
            sum -= s[i] - '0';

        printf(sum % 11 ? "%s is not a multiple of 11.\n" : "%s is a multiple of 11.\n", s);
    }
    return 0;
}
*/


