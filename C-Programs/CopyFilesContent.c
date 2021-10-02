#include <stdio.h>
#include <conio.h>

int main(void)
{
    FILE *p1; //source file pointer
    FILE *p2; //target file pointer
    char ch[100];

    //opening to write content on source file(optional)
    p1 = fopen("text.txt", "w+");
    printf("Enter the text to store in file : ");
    gets(ch);
    fputs(ch, p1);
    fclose(p1);

    //-------------------------------------------------------------
    // copying the content of source file to target file
    p2 = fopen("target.txt", "w+");
    p1 = fopen("text.txt", "r+");
    while (!feof(p1))
    {
        fgets(ch, 100, p1);
        fputs(ch, p2);
    }
    fclose(p1);
    fclose(p2);

    //------------------------------------------------------------

        //opening to view content on target file(optional)
    p2 = fopen("target.txt", "r");
    printf("content of copied file is : ");
    while (!feof(p2))
    {
        fgets(ch, 100, p2);
    }
    printf("%s", ch);
    fclose(p2);
}
