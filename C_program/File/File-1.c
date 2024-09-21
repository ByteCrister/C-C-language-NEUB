#include<stdio.h>
int main()
{
    FILE *file;
    file= fopen("test.txt1","w");

    if(file==NULL)
    {
        printf("File does'nt exist");
    }

    else
    {
        printf("File is opened");
        fclose(file);
    }

    return 0;
}
