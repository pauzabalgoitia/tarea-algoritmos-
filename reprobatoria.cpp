#include<conio.h>
#include<stdio.h>
float a,b;
main(){
	printf("indique la calificacion");
	scanf("%f", &a);
	b=70;
	if (a>=b)
	{
		printf("la calificacion es aprobatoria");
	}
	else {
		printf("la calificacion es reprobatoria");
	}
	getche();
}
