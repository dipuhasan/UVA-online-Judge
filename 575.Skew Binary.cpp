#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[100010];
    long long int i, sum, len, b;

    while(scanf("%s", &a) == 1)
    {
        sum = 0;
        len = strlen(a);
        for(i = 0; i<len; i++){
            b = a[i] - 48;
            //cout<<b<<' '<<endl;
        sum +=b*(pow(2, len-i) - 1);
    }
    if(sum == 0) break;
    cout<<sum<<endl;

}

    return 0;
}


output::

10120
200000000000000000000000000000
10
1000000000000000000000000000000
11
100
11111000001110000101101102000
0

Sample Output 
44
2147483646
3
2147483647
4
7
1041110737

