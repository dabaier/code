#include<stdio.h>
int main()
{
	char ch[105];
	gets(ch);
	int i1,i2,i3;
	i1=0;
	i2=0;
	i3=0;
	int i;
	for(i=0;ch[i]!='\0';i++)
	{
		if ((ch[i]>='a'&&ch[i]<='z')||(ch[i]>='A'&&ch[i]<='Z'))
			i1=i1+1;
		if (ch[i]==' ')
			i2=i2+1;
		if (ch[i]>='0'&&ch[i]<='9')
			i3=i3+1;
	}
		printf("%d %d %d\n",i1,i2,i3);
	return 0;
}


