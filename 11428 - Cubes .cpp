#include<cstdio>
#include<iostream>
using namespace std;

int main()
{
    int n, a, b, i, j, flag;
    while(scanf("%d", &n)==1){
        if(n==0) break;
        flag = 0;
            for(i = 0; i<60; i++){
            for(j = 1; j<=i; j++){
                if((i*i*i)-(j*j*j)==n){
                    printf("%d %d\n", i, j);
                    flag = 1;
                    break;
                }
            }
            if(flag == 1)
                break;
        }
        if(i==60)
            printf("No solution\n");
    }


    return 0;
}

/*#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int i, j, x, z, flag, n;
int main()
{

    while(scanf("%d", &n)==1){
            if(n==0) break;
        for(i = 0; i<60; i++){
            z = (i*i*i)+n, flag = 0;
            x = pow(z, 1.0/3)+0.5;
            if(x*x*x == z){
                flag = 1;
                break;
            }
        }
        if(flag)
            printf("%d %d\n", x, i);
        else
            printf("No solution\n");
    }


    return 0;
}


*/
