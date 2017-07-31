# Fix the Converter

## Prerequisites
None

## Problem
Consider the program below, whose lines have been numbered for the sake of discussion. This program is meant to convert temperatures in Celsius (C) to Fahrenheit (F), the arithmetic formula for which is F = (9/5) * C + 32. Even though this program converts the freezing temperature of water, 0° C, to 32° F just fine, its answers are several degrees off for most every other conversion. For instance, it thinks the boiling temperature of water, 100° C, is 132° F, even though it should be 212° F! Fix the below code, so that the results of the conversion are correct.

From: CS50 Quiz Bank

## Distribution Code
```c
#include <cs50.h>
#include <stdio.h>

int main(void)
{
	printf("Temperature in C: ");
	float c = get_float();
	float f = (9 / 5) * c + 32;
	printf("%.1f C = %.1f F\n", c, f);
}
```