#include <stdio.h>

typedef unsigned char BYTE;

int main (int argc,char *argv[])
{
    if (argc!=3)
    {
        return 1;
    }
    FILE *src = fopen(argv[1],"r");
    if (src==NULL)
    {
        fclose(src);
        return 1;
    }

    FILE *pst = fopen(argv[2],"w");

    if (pst == NULL)
    {
        return 1;
    }
    
    BYTE b;

    while (fread(&b,sizeof(b),1,src)!=0)
    {
        fwrite(&b,sizeof(b),1,pst);
    }
    fclose(src);

    fclose(pst);

    return 0;
}