#include<stdio.h>

float toCelsius (float fahr){
	return((5.0/9.0)*(fahr-32.0));
}

main()
{
	float fahr, celsius;
	int lower, upper, step;
	lower = 0;
	upper = 300;
	step = 20;
	fahr = lower;
	printf("Fahrenhiet  Celsius\n");
	while(fahr<=upper){
		celsius = toCelsius(fahr);
		printf("%3.0f         %6.1f\n", fahr, celsius);
		fahr = fahr+step;
	}
}