#include<stdio.h>
#include<stdlib.h>
int main()
{
      FILE *fp,*fp2;
      char ch;
      int i,pos;
      int str[100];
      /*Writing into the file*/
      fp=fopen("aravindnew1.txt","w");
      fgets(str,sizeof(str),stdin);
      fprintf(fp,"%s",str);
      fclose(fp);
      /* PRINTING THE CONTENT FOR FILE IN REVERSE */
      fp=fopen("aravindnew1.txt","r");
      i=0;
      while(i<pos)
       {
            i++;
            fseek(fp,-i,SEEK_END);
            ch=fgetc(fp);
            printf("%c",ch);
      }
      fclose(fp);
      /* COPYING CONTENT FROM ONE FILE(fp) to ANOTHER FILE(fp2) */
      fp=fopen("aravindnew1.txt","r");
      fp2=fopen("aravindnew2.txt","w");
      while((ch = fgetc(fp) )!= EOF ){
      fputc(ch,fp2);
      }printf("\n***Contect Copied from FILE fp to FILE fp2 Successfully***\n");
      fclose(fp);
      fclose(fp2);
}

/* OUTPUT:-
Aravind Dupati B.tech Student'

'tnedutS hcet.B itapuD dnivarA        

***Contect Copied from FILE fp to FILE fp2 Successfully***
*/
