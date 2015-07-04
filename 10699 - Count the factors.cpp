# include <stdio.h>
# include <math.h>
 void primeFactors(int n)
{
    printf("%d : ", n);
    int c = 0;
     for (int i = 2; i <= sqrt(n); i++){
        if(n%i==0)
          c++;
        while (n%i == 0){
            n = n/i;
        }
    }
     if(n!=1) c++;
        printf("%d\n", c);

}

int main()
{
    int n;
    while(scanf("%d", &n)==1){
            if(n==0) break;
    primeFactors(n);

    }

    return 0;
}

/*#include<stdio.h>
#include<math.h>
int main()
{
    int n, i;
    while(scanf("%d", &n)==1){
        //if(n==0) break;
    printf("%d : ", n);
    int c = 0;
    for(i = 2; i<=sqrt(n); i++){
        if(n%i==0)
            c++;
        while(n%i==0){
            n = n/i;
        }
    }
    if(n!=0) c++;
  printf("%d\n", c);

}
    return 0;
}*/
/*10699 - Count the factors
#include <stdio.h>
#include <math.h>
int main() {
	int n, i;
	while(scanf("%d", &n) == 1 && n) {
		printf("%d : ", n);
		int cnt = 0;
		for(i = 2; i <= sqrt(n); i++) {
			if(n%i == 0)
				cnt++;
			while(n%i == 0) {
				n /= i;
			}
		}
		if(n != 1)	cnt++;
		printf("%d\n", cnt);
	}
    return 0;
}*/
