#include<stdio.h>
int main()
{
    int m,n, j;

    int emon=0;
    char c;
    scanf("%d %d", &n, &m);

    int  total;

    total=n*m;

    for(int i=1; i<=total; i++)
    {

        scanf("%s",&c);

        if(c=='C' ||c=='M'|| c=='Y'){

            emon=1;
        }
        

   



}

 if(emon==1){

        printf("#Color");
    }else{

        printf("#Black&White");
    }
}