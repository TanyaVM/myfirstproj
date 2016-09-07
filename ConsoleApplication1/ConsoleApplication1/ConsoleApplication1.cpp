// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "conio.h"

int main()
{
	using namespace std;
	const float pi = 3.14;
	
	float R = 2.5;
	float S = 2.0 * pi*R*R;
	printf("%f",S);
	_getch();
    return 0;
}

