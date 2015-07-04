#include<cstdio>
#include<iostream>
using namespace std;

int main()
{
    int N, a;
    while(scanf("%d", &N)!=EOF){
        if(N==0) break;
    int sum = 0, max = 0;
    for(int i = 0; i<N; i++){
            scanf("%d", &a);
        sum+=a;
    if(max<sum)
        max = sum;
    if(sum<0)
        sum = 0;
    }

    if(sum>0)
        printf("The maximum winning streak is %d.\n", max);
    else
        printf("Losing streak.\n");
    }
    return 0;
}

