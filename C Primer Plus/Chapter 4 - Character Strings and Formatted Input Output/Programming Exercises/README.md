# <center> C Primer Plus Chapter 4 Programming Exercise Problems

#### 1. Write a program that asks for your first name, your last name, and then prints the names in the format last, first.

#### 2. Write a program that requests your first name and does the following with it:

###### a. Prints it enclosed in double quotation marks
###### b. Prints it in a field 20 characters wide, with the whole field in quotes
###### c. Prints it at the left end of a field 20 characters wide, with the whole field enclosed in quotes
###### d. Prints it in a field three characters wider than the name

#### 3. Write a program that reads in a floating-point number and prints it first in decimal-point notation and then in exponential notation. Have the output use the following formats (the number of digits shown in the exponent may be different for your system):

###### a. The input is 21.3 or 2.1e+001.
###### b. The input is +21.290 or 2.129E+001.

#### 4. Write a program that requests your height in inches and your name, and then displays the information in the following form:

###### Dabney, you are 6.208 feet tall

#### Use type float, and use / for division. If you prefer, request the height in centimeters and display it in meters.

#### 5. Write a program that requests the user's first name and then the user's last name. Have it print the entered names on one line and the number of letters in each name on the following line. Align each letter count with the end of the corresponding name, as in the following:

###### Mellisa Honeybee
###### ______7 _______8

#### Next, have it print the same information, but with the counts aligned with the beginning of each name.

###### Mellisa Honeybee
###### 7______ 8_______

#### 6. Write a program that sets a type double variant to 1.0/3.0 and a type float variable to 1.0/3.0. Display each result three times - once showing four digits to the right of the decimal, once showing 12 digits to the right of the decimal, and once showing 16 digits to the right of the decimal. Also have the program include float.h and display the values of FLT_DIG and DEL_DIG. Are the displayed values of 1.0/3.0 consistent with these values?

#### 7. Write a program that asks the user to enter the number of miles traveled and the number of gallons of gasoline consumed. It should then calculate and display the miles-per-gallon value, showing one place to the right of the decimal. Next, using the fact that one gallon is about 3.785 liters and one mile is about 1.609 kilometers, it should convert the mile-per-gallon value to a liters-per-100-km value, the usual European way of expressing fuel consumption, and display the result, showing one place to the right of the decimal. (Note that the U.S. scheme measures the amount of fuel per distance, whereas the Eureopan scheme measures the distance per amount of fuel.) Use symbolic constants (using const of #define) for the two conversion factors.
