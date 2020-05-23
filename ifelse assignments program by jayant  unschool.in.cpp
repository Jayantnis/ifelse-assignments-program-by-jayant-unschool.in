#include<stdio.h>
#include<conio.h>

int main()
{	int per;
	for(int i=0;i<=10;i++)
	{
	
	printf("\n\n=== Enter your persentage from user.? ===\n");
	scanf("%d",&per);

	if(per>80)
	{
		printf("\n A grade ");
	}
	if(per<80/*80 say kaam "less""*/&&/*logical "*"op*/per>70)
	{
		printf("\n B grade ");
	}
	if(per<70&&per>60)
	{
		printf("\n C grade ");
	}
	if(per<60&&per>45)
	{
		printf("\n D grade ");
	}
	if(per<45&&per>35)
	{
		printf("\n E grade ");
	}
	if(per<35&&per>28)
	{
		printf("\n FAIL");
	}
}
return 0;
}

