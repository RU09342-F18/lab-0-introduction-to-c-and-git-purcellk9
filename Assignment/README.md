# Embedded Systems Lab 0: Calculator 
Kevin Purcell
Embedded systems section 4
September 10, 2018
# Functionality
The main functional of this program is to demostarte several different mathematical functions including: addition, subtraction, multiply, divide, modulus, shift left, shift right, bitwise ADD, bitwise OR, bitwise XOR, and bitwise inverse on number 1, between 1 - 2 integers.
# Valid INputs/Ouputs
In order to sucessfully use this program, the user will have to input two values which get assigned as num1 and num2, in addition They will also have to input the desired operation. This calculator uses integers only, so no other data types will be allowed.
# Description of Code
The math.c file that was implemented has two integer inputs, num1 and num2, one character input, Operator, and one output. A switch statement was used in order to implement different behavior based on the operator input. Each case performs the desired arithmetic or logical operation on the integers input based on the selected operator. The default case is to return "Error! operator is not correct".
