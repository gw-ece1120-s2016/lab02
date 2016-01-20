# Introduction

*Assigned: 2016-01-20*

*Due: 2016-01-27 11:59:59 PM EST*

This is the Lab 2 assignment for ECE 1120 - C Programming for ECE.

The goals of this lab are to introduce you to different C types,
arithmetic, and printing.

**Be sure to put your name in a comment at the top of each program you
write.**

# Steps

## Part 1

Write a program called `part1.c` that declares and initializes two
integer variables `x` and `y` with the values `35` and `14`, and
displays and calculates their sum, product, integer quotient and
floating-point division quotient.


The output should exactly look like this:
```
35 + 14 = 49
35 * 14 = 490
35 // 14 = 2
35 % 14 = 7
35 / 14 = 22.500000
```

In order to produce this output, use printf to display text
combined with values of variables!

If you change the initial values of `x` and `y`, you should only have
to modify this in a single place in the program.

Add a comment to explain what you had to do in order to do
floating-point division, and why it was necessary.

## Part 2

Copy the previous program into a file called `part2.c`. 

In this copy, modify the values of `x` and `y` to `a=123456789` and
`b=1000`. Run the program and explain the results in a comment. Do the
modifications needed in order to get the correct result.

## Part 3

Write a program called `part3.c` that declares a variable named letter
of type `char` and initializes it with the constant 'C'.

Print this variable as a character *and* as an integer.  Add the
following statement: `letter=letter+1;` Print the updated value for
variable letter, as a character and as an integer, explain the result
in comment.

## Part 4 -- Floating-point Precision

Write a program called `part4.c` with the following contents. Run it
and add a comment to explain the output.

```
#include <stdio.h>
int main(void)
{
	double a, b;
	b = 2.0e20 + 1.0;
	a = b - 2.0e20;
	printf("%f \n", a);
	return 0;
}

```

## Part 5 -- Floating-point Overflow

Write a program called `part5.c` with the following contents. Run it
and add a comment to explain the output.

```
#include <stdio.h>

int main(void)
{
	double number = 3.4E307;
	printf("number is %e\n", number);
	number=number * 10000.0;
	printf("number multiplied by 10000 is %e\n", number);
	return 0;
}

```

## Grading Rubric

Each part is worth 10 points.
For each part, the rubric is:


```
Program compiles                       : 1
Program compiles with no warnings      : 1
Some output generated                  : 1

Correct output                         : 4
Quality of explanation in comment      : 3


Total : 10
```

You will receive *at most* 1/10 points if your program does not
compile. You will receive *at most* 2/10 points if your program
compiles with warnings.

You will lose 2 points if you do not put your name in a comment near
the top of the program. 

