#include<stdio.h>
#include<string.h>
int main(int argc,char *argv[])
{
	int cnt;
	char ch;
	char i;
	char filename[80];
	strcpy(filename,argv[2]);
	FILE *fp;
	fp=fopen(filename,"r");
	cnt=0;
	if(strcmp(argv[1],"-c")==0||strcmp(argv[1],"-C")==0)
	{
		while(!feof(fp))
		{
			ch=fgetc(fp);
			cnt++;
		}
		printf("×Ö·ûÊý£º%d\n",--cnt);
	}
	else if(strcmp(argv[1],"-w")==0||strcmp(argv[1],"-W")==0)
	{
		while(!feof(fp))
		{
			ch=fgetc(fp);
			if(ch==' '||ch==',')
			{
				cnt++;
			}
		}
		printf("µ¥´ÊÊý£º%d\n",++cnt);
	}
	return 0;
}