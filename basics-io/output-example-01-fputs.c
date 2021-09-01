#include <stdio.h>
#include <stdlib.h>

#define BUF 256

int has_ch(char ch, const char * line);

int main(int argc,char * argv[])  {
   FILE * fp = NULL;
   char ch = '\0';
   char line[BUF];

   if (argc != 3)  {
      printf("Usage: %s character filename\n", argv[0]);
      exit(EXIT_FAILURE);
   }

   ch = argv[1][0]; // take 1st letter from passed argument 
   // printf("1=%s   %c \n", argv[1], argv[1][0]);
   // for (int i = 0; i < 3; i++) printf("%d=%s \n",i, argv[i]);
   // while (*argv) printf("=%s \n",*argv++);

   if ((fp = fopen(argv[2], "r")) == NULL)   {
      printf("Can't open %s\n", argv[2]);
      exit(EXIT_FAILURE);
   }

   while (fgets(line,BUF,fp) != NULL) {
      if (has_ch(ch,line))
         fputs(line,stdout);
   }

   fclose(fp);
   return 0;
}

int has_ch(char ch, const char * line) {
   while(*line)
      if(ch == *line++)
         return 1;

   return 0;
}