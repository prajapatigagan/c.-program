#include<stdio.h>
int main()

{
	int h;
	int b;
	int p;
	printf("enter h");
	scanf("%d",&h);
	printf("enter b");
	scanf("%d",&b);
	printf("enter p");
	scanf("%d",&p);
	
	if(h+b>p||h+p>b||p+b>h)
	{

  if(h==b||h==p||b==p)
{
	printf( "Isosceles");
}
else if (h==p&&h==b&&b==p)
{
	printf("Equilateral");
}
else 
{
	printf("scalene");
}
}
    else
	{	

	 printf("not valid");
	}
}