#include<bits/stdc++.h>
using namespace std;
int n, a[3001], b[3001], c;

bool jolly()
{
    for(int i=0; i<n-1; i++)
        b[i] = abs(a[i+1] - a[i]);
    sort(b, b+n-1);
    for(int i = 0; i<n-1; i++)
        if(b[i]!=i+1){
            cout<<"Not jolly"<<'\n';
            return false;
        }
        cout<<"Jolly"<<endl;
        return true;
}
int main()
{
    while(scanf("%d", &n) == 1){
    for(int i = 0; i<n; i++)
        cin>>a[i];
    jolly();
  }

  return 0;
}

SampleInput
4 1 4 2 3
5 1 4 2 -1 6
SampleOutput
Jolly
Not jolly

