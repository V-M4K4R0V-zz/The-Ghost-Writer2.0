#include <stdio.h>
//author : V-M4K4R0V

int main()
{
    char lang;
    int ochichin;
    char name;
    char gender;
    char feel;

    printf("choose your language || اختر لغتك\n");
    printf("[ar] or [eng] : ");
    ;scanf("%S",lang);

    printf("YOUR LOVER NAME : ");
    ;scanf("%s",name);

    printf("Your lover Gender [M]or[F] : ")
    ;scanf("%s",gender);
    if(gender == 'M')
    {
        printf("do u [L]ove or [H]ate him [H]or[L] : ")
        ;scanf("%s",feel);
            if (feel == 'L')
            {
                printf("choose from 1 to 5 : ")
                ;scanf("%d",ochichin);
                switch(ochichin) 
                {
                    case '1' :
                        printf("Excellent!\n" );
                        break;
                    case '2' :
                        printf("Well done\n" );
                        break;
                    case '3' :
                        printf("You passed\n" );
                        break;
                    case '4' :
                        printf("Better try again\n" );
                        break;
                    case '5' :
                        printf("Better try again\n" );
                        break;
                }
            }
            else if (feel == 'H')
            {

            }
    }
    else if (gender == 'F')
    {
        printf("do u [L]ove or [H]ate her [H]or[L] : ");
        if (feel == 'L')
        {
                printf("choose from 1 to 5 : ")
                ;scanf("%d",ochichin);
        }
        else if (feel == 'H')
        {
                printf("choose from 1 to 5 : ")
                ;scanf("%d",ochichin);
        }
    }
return 0;
}