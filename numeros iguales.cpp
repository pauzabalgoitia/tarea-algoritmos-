#include<conio.h>
#include<stdio.h>
#include<iostream>
float a,b;
main(){
	printf("indique el primer numero");
	scanf("%f", &a);
	printf("indique el segundo numero");
	scanf("%f", &b);
	if (a==b)
	{
		printf("los numeros son iguales");
		}
	else 
	{
		printf("los numeros son diferentes");
	}
	getche();
}
