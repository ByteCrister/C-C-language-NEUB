        #include<stdio.h>
        int main()
        {
            int a,b,c;
            printf("Enter three intejer value");
            scanf("%d%d%d",&a,&b,&c);

            if (a>b && a>c)
            {
                printf("%d is large",a);
            }

            else if (b>c && b>a)
            {
                printf("%d is large",b);
            }

            else if (c>a && c>b)
            {

             printf("%d is large",c);
             }
             else

                printf("Equal");

            getch();

        }
