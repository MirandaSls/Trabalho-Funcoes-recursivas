#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int ex01();
int ex02();
int ex03();


int main()
{
    int op;
    setlocale(LC_ALL,"portuguese");
    system("CLS");
    printf("========================================");
    printf("\nEscolha qual exerc�cio deseja executar: ");
    printf("\nN�mero 01 - Exerc�cio 1");
    printf("\nN�mero 02 - Exerc�cio 2");
    printf("\nN�mero 03 - Exerc�cio 3");
    printf("\nN�mero 00 - Sair");
    printf("\nEscolha: ");
    scanf("%i",&op);
    printf("========================================");

    while(op < 0 || op > 3)
    {
        printf("========================================");
        printf("\nEscolha qual exerc�cio deseja executar: ");
        printf("\nN�mero 01 - Exerc�cio 1");
        printf("\nN�mero 02 - Exerc�cio 2");
        printf("\nN�mero 03 - Exerc�cio 3");
        printf("\nN�mero 00 - Sair");
        printf("\nEscolha: ");
        scanf("%i",&op);
        printf("========================================");
    }
    switch(op)
    {
        case 1:
            ex01();
            break;
        case 2:
            ex02();
            break;
        case 3:
            ex03();
            break;
        default:
            return 0;
    }
}

int ex01()
{
    int n1 = 0, n2 = 0, resto = 0;

    printf("\n- Digite um dividendo: ");
    scanf("%i",&n1);

    printf("\n- Digite o divisor: ");
    scanf("%i",&n2);

    resto = n1 - ((n1 / n2) * n2);

    printf("\n- O resto �: %i", resto);

    getch();
    main();
}

int ex02()
{
    int n1, n2, r;

    printf("\n- Digite um dividendo: ");
    scanf("%i",&n1);

    printf("\n- Digite o divisor: ");
    scanf("%i",&n2);

    restodivisao(n1,n2,r);

    getch();
    main();
}

void restodivisao(int n1,int n2,int resto)
{
    resto = n1 - ((n1 / n2) * n2);
    printf("\n- O resto �: %i", resto);
}

int ex03()
{
    int n1, n2, r;

    printf("\n- Digite um dividendo: ");
    scanf("%i",&n1);

    printf("\n- Digite o divisor: ");
    scanf("%i",&n2);

    resto(n1,n2,r);

    printf("\n- O resto �: %i", resto(n1,n2,r));

    getch();
    main();
}

void resto(int a,int b,int resto)
{
    return resto = a - ((a / b) * b);
}










