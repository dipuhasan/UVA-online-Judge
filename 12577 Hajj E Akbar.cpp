
#include<stdio.h>
#include<string.h>
int main()
{
    char a[50];
    int t=0;
    while(scanf("%s",a))
    {
    if(!strcmp(a,"*"))
      break;
    else if(!strcmp(a,"Hajj"))
        printf("Case %d: Hajj-e-Akbar\n",++t);
        else
    printf("Case %d: Hajj-e-Asghar\n",++t);
    }
    return 0;
}

/*==============================*/
#include<stdio.h>
int main()
{
    int i, j, t = 0;
    char a[50];

    while(scanf("%s", a)&& strcmp(a, "*")){

    if(strcmp(a, "Hajj")==0)
        printf("Case %d: Hajj-E-Akbar\n", ++t);
    //else(strcmp(a, "Umrah")==0)

      else
        printf("Case %d: Hajj-e-Asghar\n", ++t);
  // else if(strcmp(a, "Umrah")==0)
    //    printf("Case %d: Hajj-e-Asghar\n", ++t);


       }
       return 0;
     }

