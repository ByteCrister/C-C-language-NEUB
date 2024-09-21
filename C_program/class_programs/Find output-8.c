int main ()
{
    int i=0, x=0;

    for(i=1; i<=3; i++)
    {
        for(x=1; x<=5; x++)
        {
            printf("%d ",x);
        }
        printf("\n");
    }
    printf("\ni=%d, x=%d",i,x);

    return 0;
}
