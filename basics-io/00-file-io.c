#include <stdio.h>
#include <stdlib.h>

void write(FILE*);
void read(FILE*, char[]);

void demo01();
void demo02();

int main( ) {
    // demo01();
    demo02();
    return 0;
}

void demo01(){
    char string[100];
    sprintf(string, "Number is %d", 11);
}
void demo02(){
    char content[100];
    FILE *fp = NULL;

    write(fp);
    read(fp, content);
}
void write(FILE *fp){
    // fp = fopen("somefile123.txt", "r+"); // open existing file for writing
    // if (fp) exit(1);
    if ((fp = fopen("somefile123.txt", "w")) == NULL) {
        fprintf(stderr,"Cannot open the file..."); //widely used instead of printf("Cannot open the file...");
        exit(1);
    }
    for (int i = 0; i < 10; i++) 
        fprintf(fp,"The count number is %d\n", i);
    fclose(fp);
}
void read(FILE *fp, char content[]){
    if ((fp = fopen("somefile123.txt", "r+")) == NULL) {
        fprintf(stderr,"Cannot open the file..."); //widely used instead of printf("Cannot open the file...");
        exit(1);
    }
    printf("File content is -- \n");
    printf("\n ... print the strings ... \n");
    while (!feof(fp)) {
        fgets(content,100,fp);
        printf("%s",content);
    }
    fclose(fp);
}