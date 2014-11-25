#include<stdio.h>
#include<conio.h>
#include<ctype.h>

#define home 71
#define end 79
#define highlight 0x70
#define normal 0x07
#define enter 13
#define left 75
#define right 77
#define esc 27

int main(void)
{
	char word[20],ch,k,a,n;
	char *pstart;
	char *pend;
	char *pcurrent;
	int start=0,iend=0, current=0,cc=0;
	int x=10,y=10,i,terminate=0;
	pstart=word;
	pend=word;
	pcurrent=word;
	clrscr();
	flushall();
	printf("\n please enter your name \n ");

	gotoxy(y,x);
	textattr(highlight);
	for(i=0;i<25;i++)
	  cprintf(" ");
	flushall();
	i=0;
	gotoxy(y+current,x);
	do
	{
				ch=getch();
				i++;

				if(isprint(ch) && iend<22 )
			  {
				 *pcurrent=ch;
				 printf("%c",ch);
			  // putchar(ch);
				 current++;
				 pcurrent++;
				 pend++;
				 iend++;
			  }
			switch(ch)
			{
				case NULL:
					ch=getch();
					switch(ch){

						case left:
							current--;
							pcurrent--;
							gotoxy(y+current,x);
							break;
						case right:
							current++;
							gotoxy(y+current,x);
							pcurrent++;
							break;
						case home:
							pcurrent=pstart;
							current=0;
							gotoxy(y+current,x);
							break;
						case end:
							pcurrent=pend;
							current=iend;
							gotoxy(y+current,x);
							break;
					}
					 break;

			  case enter:
				word[i-2]='\0';
				clrscr();
				cprintf(" %s",word);
			   /*	for(k=0;k<i;k++)
					cprintf("%c",word[k]);  */

				break;
			  case esc:
				terminate=1;
				break;
			}

	}
	while(terminate!=1);
//		printf("\n  hello %s ",word);
		getch();
//		textattr(normal);
	return 0;
}

