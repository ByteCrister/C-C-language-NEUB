#include<stdio.h>
main()
{
    while(1)
    {
        int a;
        float b,c,fah,cel,kel;
        printf("\n********* TEMPERATURE CONERTION***********");
        printf("\n 1.Celsius to Fahrenheit . \n");
        printf("\n 2.Celsius to Kelvin . \n");
        printf("\n 3.Fahrenheit to Celsius . \n");
        printf("\n 4.Fahrenheit to kelvin . \n");
        printf("\n 5.kelvin to Celsius . \n");
        printf("\n 6.kelvin to Fahrenheit . \n");
        printf("\n 7. Or enter a value and convert to anything . \n");
        printf("\n Enter 1~7 :");

        scanf("%d",&a);


        switch(a)
        {
        case 1:
        {
            printf("\n[Celsius to Fahrenheit]\n");
            printf("Enter the value :");
            scanf("%f",&b);
            fah=32+((9*b)/5);
            printf("Celsius %f >> %.2f Fahrenheit \n\n",b,fah);

            break;

        }
        case 2:
        {
            printf("\n[Celsius to Kelvin]\n");
            printf("Enter the value :");
            scanf("%f",&b);
            kel=b+273.15;
            printf("Celsius %f >> %.2f Kelvin \n",b,kel);
            break;
        }
        case 3:
        {
            printf("\n[Fahrenheit to Celsius]\n");
            printf("Enter the value :");
            scanf("%f",&b);
            fah=((5*(b-32))/9);
            printf("Fahrenheit %f >> %.2f Cencius \n",b,fah);
            break;
        }
        case 4:
        {
            printf("\n[Fahrenheit to Kelvin]\n");
            printf("Enter the value :");
            scanf("%f",&b);
            kel=((5*(b-32))/9)+273.15;
            printf("Fahrenheit %f >> %.2f Kelvin \n",b,kel);
            break;

        }
        case 5:
        {
            printf("\n[Kelvin to Celsius]\n");
            printf("Enter the value :");
            scanf("%f",&b);
            cel=b-273.15;
            printf("Kelvin %f >> %.2f Celsius \n",b,cel);
            break;
        }
        case 6:
        {
            printf("\n[Kelvin to Fahrenheit]\n");
            printf("Enter the value :");
            scanf("%f",&b);
            fah=((b-273.15)*9/5+32);
            printf("Kelvin %f >> %.2f Fahrenheit \n",b,fah);
            break;
        }
        case 7:
        {
            printf("\n Enter Value : ");
            scanf("%f",&c);

            fah=32+((9*c)/5);
            printf("Celsius %f >> %.2f Fahrenheit \n",c,fah);

            kel=c+273.15;
            printf("Celsius %f >> %.2f Kelvin \n",c,kel);

            fah=((5*(c-32))/9);
            printf("Fahrenheit %f >> %.2f Cencius \n",c,fah);

            kel=((5*(c-32))/9)+273.15;
            printf("Fahrenheit %f >> %.2f Kelvin \n",c,kel);

            cel=c-273.15;
            printf("Kelvin %f >> %.2f Celsius \n",c,cel);

            fah=((c-273.15)*9/5+32);
            printf("Kelvin %f >> %.2f Fahrenheit \n",c,fah);
            break;


        }


        }





        getch();
    }
}
