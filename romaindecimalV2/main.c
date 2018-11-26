#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 21
#define I 1
#define V 5
#define X 10
#define L 50
#define C 100
#define D 500
#define M 1000

//Prototypes
void DecimalToRomain(int nB);
void RomainToDecimal (char cNb[]);

int main()
{
    int dDc=0;
    int iTemp=1;
    char cRm[]=" ";

    do
      {
        printf("Bienvenue sur le Probgramme de convertisseur\n");
        printf("Choisir votre mode de conversion\n");
        printf("Saisir 1 pour du décimal vers romain\n");
        printf("Saisir 2 pour du romain vers décimal\n");
        printf("Saisir 0 pour quitter\n");
        scanf("%d", &iTemp);

      }while ((iTemp!=2) || (iTemp!=1)|| (iTemp!=0));

        printf("Saisir votre nombre\n");
      switch (iTemp)
      {
        case 1:
            do
            {
                scanf("%d", &dDc);

            } while ((dDc>3999) || (dDc<0));
            DecimalToRomain(dDc);
        break;

        case 2:
            scanf("%s", cRm);
            RomainToDecimal(cRm);
        break;
      }




    return 0;
}

void DecimalToRomain(int nB)
{
    //initialisation
    int cpt=1;
    char cTemp[4];
    char cResult[MAX];

    //gestion des milliers
    if (nB>=1000)
    {
        do
        {
            nB -= 1000;
            strcat(cTemp,"M");
            cpt++;
        } while (nB>1000);
        strcat (cResult, cTemp);

        //reinitialisation
        for (cpt=1; cpt<4; cpt++)
        {
            strcpy(cTemp," ");
        }
    }

    //gestion des Centaines
    if ((nB>=100) & (nB<1000))
    {
        cpt =1;
        do
        {
            if (cpt==4)
            {
                strcpy(cTemp,"CD");
            }
            else if (cpt==5)
            {
                strcpy(cTemp,"D");
            }
            else if (cpt==9)
            {
                strcpy(cTemp,"CM");
            }
            else
                strcat(cTemp, "C");

            cpt++;
        } while (nB<100);

        strcat (cResult, cTemp);

        //reinitialisation
        for (cpt=1; cpt<4; cpt++)
        {
            strcpy(cTemp," ");
        }

    }

    //gestion des Dizaines
    if ((nB>=10) & (nB<100))
    {
        cpt =1;
        do
        {
            if (cpt==4)
            {
                strcpy(cTemp,"XL");
            }
            else if (cpt==5)
            {
                strcpy(cTemp,"L");
            }
            else if (cpt==9)
            {
                strcpy(cTemp,"XC");
            }
            else
                strcat(cTemp, "X");

            cpt++;
        } while (nB<100);

        strcat (cResult, cTemp);

        //reinitialisation
        for (cpt=1; cpt<4; cpt++)
        {
            strcpy(cTemp," ");
        }

    }


    //gestion des Unités
    if ((nB>=1) & (nB<10))
    {
        cpt =1;
        do
        {
            if (cpt==4)
            {
                strcpy(cTemp,"IV");
            }
            else if (cpt==5)
            {
                strcpy(cTemp,"V");
            }
            else if (cpt==9)
            {
                strcpy(cTemp,"IX");
            }
            else
                strcat(cTemp, "I");

            cpt++;
        } while (nB<100);

        strcat (cResult, cTemp);

        printf("%d vaut %s\n",nB,cResult );
    }
}

void RomainToDecimal (char cNb[])
{
    //Initialisation
    int nResult=0;
    int nCpt=1;
    int nTemp=0;
    int nTemp2=0;

    for (nCpt=1; nCpt<strlen(cNb); nCpt++)
    {
        switch (cNb[nCpt])
        {
            case I:
                nTemp2 = I;
            break;
            case V:
                nTemp2 = V;
                break;
            case X:
                nTemp2 = X;
                break;
            case L:
                nTemp2 = L;
                break;
            case C:
                nTemp2 = C;
                break;
            case D:
                nTemp2 = D;
                break;
            case M:
                nTemp2 = M;
                break;
        }

        if ((nTemp<nTemp2) || (nTemp!=0))
        {
            nResult += nTemp2;
        }

        else
        {
            nResult = nResult-nTemp*2+nTemp2;
        }

        nTemp = nTemp2;
    }

    printf("%s vaut %d\n",cNb,nResult);
}
