#include <stdio.h>
//author : V-M4K4R0V

int main()
{
    char lang[];
    int 3nibanum;
    char name[];
    char gender[];
    char feel[];

    printf("choose your language || اختر لغتك"\n);
    printf("[ar] or [eng] : ");
    scanf("%S",L_lang);

    printf("YOUR LOVER NAME : ");
    scanf("%s",L_name);

    printf("Your lover Gender [M]or[F] : ")
    scanf("%s",L_gender);
    if(gender == 'M')
    {
        printf("do u [L]ove or [H]ate him [H]or[L] : ")
        scanf("%s",feel);
            if (feel == 'L')
            {
                printf("choose from 1 to 5 : ")
                scanf("%d",3nibanum);
            }
            else if (feel == 'H')
            {

            }
    }
    else if (gender == 'F')
    {
        feel = input("do u [L]ove or [H]ate her [H]or[L] : ")
        if (feel == 'L')
        {
                printf("choose from 1 to 5 : ")
                scanf("%d",3nibanum);
        }
        else if (feel == 'H')
        {
                printf("choose from 1 to 5 : ")
                scanf("%d",3nibanum);
                
        }
    }
return 0;
}