/*
2.32 (Body Mass Index Calculator)

Create a BMI calculator application that reads the user’s 
weight in pounds and height in inches (or, if you prefer, 
the user’s weight in kilograms and height in meters), then 
calculates and displays the user’s body mass index. Also, 
the application should display the following information 
from the Department of Health and Human Services/National 
Institutes of Health so the user can evaluate his/her BMI:

BMI VALUES
Underweight: less than 18.5
Normal: between 18.5 and 24.9
Overweight: between 25 and 29.9
Obese: 30 or greater

Equation: (weightInPounds x 703) / (heightInInches * heightInInches)
*/

#include <stdio.h>

int main(void)
{

	// Get data from user
	double BMI_FACTOR = 703; 
	double weight = 0; 
	double height = 0;
	
	printf("%s", "Enter your weight in pounds -->> ");
	scanf("%lf", &weight);

	printf("%s", "Enter your height in inches -->> ");
	scanf("%lf", &height);


	// Compute the Body Mass Index
	double bmi = (weight * BMI_FACTOR) / (height * height);

	// Categorize BMI	

	if (bmi < 18.5){
		puts("Underweight");
	}   
	else if (bmi >= 18.5 && bmi <= 24.9) {
		puts("Normal");
	}
   
	else if (bmi >= 25 && bmi <= 29.9) {
		puts("Overweight");
	}

	else if (bmi >= 30){
		puts("Obese");
	}

	printf("%.1lf\n", bmi);


	return 0;
}






