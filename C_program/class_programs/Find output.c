int main()
{
    int i = 0, x = 0;

    do
    {
        if(i%5 == 0)
        {
            x += i;
            printf("%d ", x);
        }
        i++;
    }
    while(i < 15);

    printf("\nx = %d ", x);
                    return 0;
}
