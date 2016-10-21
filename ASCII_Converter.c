#include <stdio.h>
#include <conio.h>

int main()
{
    char a;
    int ch;
    int b;
    int ch2;

    do
    {
        printf("\tASCII Converter\n");

        printf("1: Convert from Glyph to Decimal \n");
        printf("2: Convert from Decimal to Glyph \n\n");

        printf("ASCII Converter > ");
        scanf("%d",&ch);

        system("cls");
        switch(ch)
        {
        case 1:
            printf("\tASCII Converter\n\n");
            printf("Enter the Glyph to convert : ");
            scanf("%c",&a);
            scanf("%c",&a);
            printf("%c = %d",a,a);
            getch();
        break;
        case 2:
            printf("\tASCII Converter\n\n");
            printf("Enter the number to convert : ");
            scanf("%d",&b);
            printf("%d = %c",b,b);
            getch();
        break;
        default:
            printf("INVALID COMMAND");
        break;
        }
        printf("\n\n99: Go back to main menu\n");
        printf("ASCII Converter > ");
        scanf("%d",&ch2);
        system("cls");
    }
    while(ch2=99);
    return 0;
}
