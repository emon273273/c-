#include<stdio.h>
int main()
{
    int numberofround, winner, lead=0, i;
    int sum1=0;
    int sum2=0;

    int dif=0;
    scanf("%d", &numberofround);




    for(i=0; i<numberofround; i++)
    {

        int player1, player2;
     

        scanf("%d %d", &player1, &player2);
         
 sum1+=player1;
      sum2+=player2;


        if(sum1>sum2)
        {
            dif = sum1-sum2;
           

           if(dif>lead){

            lead=dif;
            winner=1;
        }
 
        }

         else
        {
            dif = sum2-sum1;
            if(dif>lead){

                lead=dif;
                winner=2;
            }
        }
    }


    // if(max<lead)
    // {
    //     max=lead;
    //     if(player1>player2)
    //     {
    //         winner=1;
    //     }
    // }
    // else
    // {
    //     winner=2;
    // }
    // printf("%d %d", winner, max);




printf("%d %d\n",winner, lead);


    return 0;
}