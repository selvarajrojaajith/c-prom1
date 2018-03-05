#include <stdio.h>
#include <conio.h>
void main(){
     int charcnt=0,commacnt=0,i;
     char ch,str[125];
     clrscr();
     printf("Enter a string");
     scanf("%[^s]s",str);
     printf("\n\nEntered String is \" %s);
     for(i=0;i<10;i++)
     if(str[i]==' ')
     elseif(str[i]=='.')
     elseif(str[i]==',')
        commacnt++;
     }
     charcnt=i;
     printf("\n\nTotal Characters : %d",charcnt);
     printf("\nTotal Commas     : %d",commacnt);
     getch();
}
