#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Sans_oyunu();

int main(void)
{
    char cevap,hic;
    do
    {
        printf("\n\n\n");
        printf("Craps oynamak ister misin ? Evet e"
               " Hayir h:");
        cevap=getchar();
        hic=getchar();
        if(cevap=='e' || cevap=='E')
            Sans_oyunu();
    }while(cevap=='e' || cevap=='E');

system("pause");
return 0;
}

void Sans_oyunu()
{
    int rand_int(int a, int b);
    srand(time(NULL));

    int die_1,die_2,die_3,die_4,roll,roll_2;

    die_1=rand_int(1,6);
    die_2=rand_int(1,6);
    roll=die_1 + die_2;
    printf("Zarlar = %i\n",roll);

    if(roll==7 || roll==11)
        {
            printf("Kazandin!\n");
            return;
        }
    else if(roll==2 || roll==3 || roll==12)
        {
            printf("Kaybettin\n");
            return;
        }
    else
        {
            do
            {
                die_3=rand_int(1,6);
                die_4=rand_int(1,6);
                roll_2=die_3 + die_4;
                printf("Zarlar = %i\n",roll_2);
                if(roll_2==roll)
                 {
                     printf("Kazandin");
                     return;
                 }
            }while(roll_2 != 7);

        printf("kaybettin");
        }
}
int rand_int(int a, int b)
{
    return rand()%(b-a+1)+a;
}
