#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<errno.h>
#include<assert.h>
#include<string.h>
#include<ctype.h>
#include<dirent.h>
#include<sys/types.h>
#include<sys/stat.h>
int main()
{
    DIR *p = opendir(".");
    if(p == NULL)
    {
        fprintf(stderr,"cannot open directory:%s\n",p);
        return;
    }
    struct stat st;
    struct dirent *entry = NULL;
    while((entry = readdir(p)))
    {
        if(strncmp( entry->d_name,".",1) != 0)
        {
            stat(entry->d_name,&st);
            if(S_ISDIR(st.st_mode))
            {
                printf("\033[1;34m %s    \033[0m",entry->d_name);
            }
            else if(st.st_mode & (S_IXUSR | S_IXGRP | S_IXOTH))
            {
                printf("\033[1;32m %s    \033[0m",entry->d_name);
            }
            else
            {
                printf("%s  ",entry->d_name);
            }
        }
    }
    closedir(p);
    printf("\n");
    exit(0);
}
