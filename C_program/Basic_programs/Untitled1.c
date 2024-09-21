#include<stdio.h>
int main()
{
    freopen("in", "r", stdin);
    freopen("out", "w", stdout);
    int cube=1,roleCube;

    while(cube!=0)
    {

        if(cube!=0)
        {
            scanf("%d",&roleCube);

        }

        if((roleCube==1 || roleCube>12))
        {
            scanf("%d",&roleCube);
        }

        if((roleCube>1 && roleCube<13) && cube<=100)
        {
            cube+=roleCube;

            if(cube>100)
            {
                cube-=roleCube;
            }

            if(cube==9)
                cube=34;
            if(cube==40)
                cube=64;
            if(cube==67)
                cube=86;
            if(cube==54)
                cube=19;
            if(cube==90)
                cube=48;
            if(cube==99)
                cube=77;

            printf("You are now on square %d\n",cube);

        }

        if(roleCube==0)
        {
            printf("\nYou Quit!");
            break;
        }

        if(cube==100)
        {
            printf("\nYou win !");
            break;
        }

        if(roleCube>12 || roleCube==1 )
        {

            scanf("%d",&roleCube);

            if((roleCube>1 && roleCube<13))
            {
                cube+=roleCube;

                if(cube>100)
                {
                    cube-=roleCube;
                }

                if(roleCube==0)
                {
                    printf("\nYou Quit!");
                    break;
                }

                if(cube==9)
                    cube=34;
                if(cube==40)
                    cube=64;
                if(cube==67)
                    cube=86;
                if(cube==54)
                    cube=19;
                if(cube==90)
                    cube=48;
                if(cube==99)
                    cube=77;

                printf("You are now on square %d\n",cube);
            }

        }
    }
    return 0;
}
