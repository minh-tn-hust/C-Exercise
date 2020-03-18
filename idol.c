#include <stdio.h>
#include <dos.h>
#include <dir.h>
#include <string.h>
 
void main(int argc,char *arg[])
{
    if (argc != 3)
        return 0;
 
    ffblk findinfo;
    char s[260];
    char c = arg[1][strlen(arg[1]) - 1];
 
    if (arg[1][strlen(arg[1]) - 1] != '\\')
        sprintf(s,"%s\\*.*",arg[1]);
    else
        sprintf(s,"%s*.*",arg[1]);
 
 
    int done = findfirst(s,&findinfo,FA_ARCH | FA_RDONLY | FA_HIDDEN | FA_SYSTEM | FA_DIREC);
 
    FILE *fo = NULL;
 
    if (arg[2][0] == '>' && arg[2][1] == '>')
    {
        strcpy(s,arg[2] + 2);
        fo = fopen(s,"wt");
    }
 
    while (!done && fo != NULL)
    {
        if ((findinfo.ff_attrib & FA_DIREC) == FA_DIREC)
            fprintf(fo,"[%s]\n", findinfo.ff_name);
        else
            fprintf(fo,"%s\n", findinfo.ff_name);
 
        done = findnext(&findinfo);
    }
 
    fclose(fo);
}
