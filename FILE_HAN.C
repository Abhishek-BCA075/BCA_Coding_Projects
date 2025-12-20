#include <stdio.h>
#include <conio.h>
 int main() {
 clrscr();
   FILE *fp;
   char text[100];

   fp = fopen("data.txt", "w");
   printf("enter text: ");
   gets(text);
   fprintf(fp, "%s", text);
   fclose(fp);

   fp = fopen("data.text","r");
   printf("\nfile content:\n");
   while(fgets(text, 100, fp) != NULL) {
	  printf("%s", text);
	  }
	  fclose(fp);
	  getch();
	  return 0;

   }
