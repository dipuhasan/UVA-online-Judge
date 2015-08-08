#include<stdio.h>

int prime[1000005] = { 1, 1, 0 };

int main()
{
    int i, j;
    for( i = 2 ; i <= 1000000 ; i++ )
        if( !prime[i] )
            for( j = i+i ; j <= 1000000 ; j+=i )
                prime[j] = 1;

    int N;
    while( scanf( "%d", &N ) != EOF )
    {
        int N_origin = N;
        int N_reverse = 0;
        while( N )
        {
            N_reverse *= 10;
            N_reverse += N % 10;
            N /= 10;
        }
        if( prime[N_origin] )
            printf( "%d is not prime.\n", N_origin );
        else if( prime[N_reverse] || N_origin == N_reverse )
            printf( "%d is prime.\n", N_origin );
        else
            printf( "%d is emirp.\n", N_origin );
    }

    return 0;
}

/*<------------------------------>*/

#include<stdio.h>

int prime[1000005] = { 1, 1, 0 };

void seive()
{
    int i, j;
    for( i = 2 ; i <= 1000000 ; i++ )
        if( !prime[i] )
            for( j = i+i ; j <= 1000000 ; j+=i )
                prime[j] = 1;
}
int main()
{


    int N;
    seive();
    while( scanf( "%d", &N ) != EOF )
    {
        int N_origin = N;
        int N_reverse = 0;
        while( N )
        {
            N_reverse *= 10;
            N_reverse += N % 10;
            N /= 10;
        }
        if( prime[N_origin] )
            printf( "%d is not prime.\n", N_origin );
        else if( prime[N_reverse] || N_origin == N_reverse )
            printf( "%d is prime.\n", N_origin );
        else
            printf( "%d is emirp.\n", N_origin );
    }

    return 0;
}

/*<------------------------------>*/

#include<cstdio>
#include<iostream>
using namespace std;

int pr[10000010]={1,1,0};
void seive()
{
    int i, j;
    for(i = 2; i<=100000; i++)
        if(!pr[i])
     for(j = i+i; j<=100000; j+=i)
         pr[j] = 1;

}
int main()
{
    int N;
    seive();
    while(~scanf("%d", &N)){
      int N_O = N;
      int N_rev = 0;
      while( N ){
        N_rev *=10;
        N_rev +=N%10;
        N /=10;
      }
      if(pr[N_O])
        printf( "%d is not prime.\n", N_O);
      else if(pr[N_rev] || N_O == N_rev)
        printf( "%d is prime.\n", N_O);
      else
        printf("%d is emirp.\n", N_O);

    }


    return 0;
}

/*<------------------------------>*/

#include<cstdio>
#include<iostream>

using namespace std;

int prime[1000005] = { 1, 1, 0 };

void seive()
{

    int i, j;
    for( i = 2 ; i <= 1000000 ; i++ )
        if( !prime[i])
            for( j = i+i ; j <= 1000000 ; j+=i )
                prime[j] = 1;
}

int main(){

    int N;
    seive();
    while( scanf("%d", &N ) != EOF){

        int N_origin = N;
        int N_reverse = 0;
        while( N ){
            N_reverse *= 10;
            N_reverse += N % 10;
            N /= 10;
        }
        if( prime[N_origin] )
            printf( "%d is not prime.\n", N_origin );

        else if( prime[N_reverse] || N_origin == N_reverse )
            printf( "%d is prime.\n", N_origin );

        else
            printf( "%d is emirp.\n", N_origin );
    }

    return 0;
}

#include <stdio.h>
#include <string.h>

void mark(bool arr[], int a, int n)
{
    int i = 2, num;
    while ( (num = i*a) <= n )
    {
        arr[ num-1 ] = 1;
        ++i;
    }
}


void seive(int n)
{
    if (n >= 2)
    {
        bool arr[n];
        memset(arr, 0, sizeof(arr));

        for (int i=1; i<n; ++i)
        {
            if ( arr[i] == 0 )
            {
                printf("%d ", i+1);
                mark(arr, i+1, n);
            }
        }
    }
}

int main()
{
    int n;
    while(~scanf("%d", &n)){
    seive(n);
    printf("\n");

    }
   return 0;
}

