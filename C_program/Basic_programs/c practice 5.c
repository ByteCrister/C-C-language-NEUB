#include<stdio.h>
#include<math.h>

int main()
{



    int a,a1,b1,c1,d1=0,rem;
    float b,b2,c,sum,avg,sub,div,mul,cel,fah,t,s,c2,c3,area;

    printf("enter 1 for summation .\n");
    printf("enter 2 for subtract .\n");
    printf("enter 3 for division .\n");
    printf("enter 4 for multiplication .\n");
    printf("enter 5 for reminder .\n");
    printf("enter 6 for average .\n");
    printf("enter 7 for Celsius to Fahrenheit.\n");
    printf("enter 8 for Fahrenheit to Celsius .\n");

    printf("enter 9 for tan? .\n");
    printf("enter 10 for sin? .\n");
    printf("enter 11 for cos? .\n");

    printf("enter 12 for area of parallelogram  .\n");
    printf("enter 13 for area of circle .\n");
    printf("enter 14 for area of triangle .\n");
    printf("enter 15 for area of rectangle .\n");

    printf("enter 16 positive or negative number? .\n");
    printf("enter 17 pass or fail? .\n");
    printf("enter 18 even or odd ? .\n");
    printf("enter 19 prime number or not ? .\n");
    printf(" -> ");
    scanf("%d",&a);


    if(a>=1 && a<=8)
    {

        switch(a)

        {
        case 1:
        {
            printf("Enter two number :");
            scanf("%f%f",&b,&c);
            sum=b+c;
            printf("%f + %f=%.2f",b,c,sum);
            break;

        }
        case 2:
        {
            printf("Enter two number :");
            scanf("%f%f",&b,&c);
            sub=b-c;
            printf("%f - %f=%.2f",b,c,sub);
            break;
        }
        case 3:
        {
            printf("Enter two number :");
            scanf("%f%f",&b,&c);
            div=b/c;
            printf("%f / %f=%.2f",b,c,div);
            break;
        }
        case 4:
        {
            printf("Enter two number :");
            scanf("%f%f",&b,&c);
            mul=b*c;
            printf("%f * %f=%.2f",b,c,mul);
            break;
        }
        case 5:
        {
            printf("Enter two number :");
            scanf("%d%d",&b1,&c1);
            rem=b1%c1;
            printf("%d ~ %d = %d",b1,c1,rem);
            break;
        }
        case 6:
        {
            printf("Enter two number :");
            scanf("%f%f",&b,&c);
            avg=(b+c)/2;
            printf("%f x/2 %f=%.2f",b,c,avg);
            break;

        }
        case 7:
        {
            printf("Enter Fahrenheit value :");
            scanf("%f",&b);
            cel=(5*(b-32))/9;
            printf("Celsius value=%.2f",cel);
            break;

        }
        case 8:
        {
            printf("Enter Celsius value :");
            scanf("%f",&b);
            fah=((9*b/5))+32;
            printf("Fahrenheit value=%.2f",fah);
            break;
        }
        }
    }
    else if(a>=9 && a<=11)

    {
        switch(a)
        {


        case 9:
        {
            printf("tan=?");
            scanf("%f",&c);
            t=tan(c/(180/3.14));
            printf("tan(%f) =%.2f",c,t);
            break;
        }
        case 10:
        {
            printf("sin=?");
            scanf("%f",&b2);
            s=sin(b2/(180/3.14));
            printf("sin(%f) =%.2f",b2,s);
            break;
        }
        case 11:
        {
            printf("cos=?");
            scanf("%f",&c);
            c3=cos(c/(180/3.14));
            printf("cos(%f) =%.2f",c,c3);
            break;
        }
        }
    }
    else if(a>=12 &&a<=15)
    {
        switch(a)
        {

        case 12:
        {
            printf("Base =\n");
            scanf("%f",&b);
            printf("Height =\n");
            scanf("%f",&c);
            area=b*c;
            printf("Area = %.2f",area);
            break;
        }
        case 13:
        {
            printf("Radius =");
            scanf("%f",&c);
            area=3.1416*c*c;
            printf("Circle area=%.2f",area);
            break;
        }
        case 14:
        {
            printf("Height=\n");
            scanf("%f",&b);
            printf("Base=\n");
            scanf("%f",&c);
            area=(b*c)/2;
            printf("Area=%.2f",area);
            break;
        }
        case 15:
        {
            printf("Length = \n");
            scanf("%f",&b);
            printf("Height = \n");
            scanf("%f",&c);
            area=b*c;
            printf("Area = %.2f",area);
            break;
        }
        }
    }
    else if(a==16)
    {
        switch(a)
        {

        case 16:
        {
            printf("Enter any number :\n");
            scanf("%f",&b);

            if(b>0)
            {
                printf("Positive number!");
            }
            else if(b<0)
            {
                printf("Negative number!");
            }
            else
                printf("Error!!");
            break;
        }
        }
    }
    else if(a==17)
    {
        switch(a)
        {
        case 17:
        {
            printf("Enter subject mark :");
            scanf("%f",&c);

            if(c>=80 && c<=100)
            {
                printf("A+");
            }
            else if(c>=70)
            {
                printf("A");
            }
            else if(c>=60)
            {
                printf("A-");
            }
            else if(c>=50)
            {
                printf("B");
            }
            else if(c>=40)
            {
                printf("C");
            }
            else if(c>=0)
            {
                printf("Fail!!\n");
            }
            else
                printf("Error!\n");

            break;

        }
        }
    }
    else if(a==18)
    {
        switch(a)
        {
        case 18:
        {
            printf("Enter any intejer number :");
            scanf("%d",&a1);

            if(a1%2==0)

                printf("Even number\n");

            else if(a1%2!=0)

                printf("Odd number\n");

            else
                printf("Error!!\n");
            break;
        }
        }
    }
    else
    {
        switch(a)
        {
        case 19:
        {
            printf("Enter any intejer number :");
            scanf("%d",&b1);

            for(c1=2; c1<b1; c1++)
            {
                if(b1%c1==0)

                {
                    d1++;
                    break;
                }

            }
            if (d1==0)

                printf("Prime number!");

            else
                printf("Not prime number");
            break;

        }

        }
    }

    return 0;
}
