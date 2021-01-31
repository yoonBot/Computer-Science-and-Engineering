# <h1 align='center'> Review Notes <프로그래밍 오답 노트> :pencil2:

#### **`From C Primer Plus Textbook`**

##### 1. (Ch.6 - 3): Use nested loops to produce the following pattern:
###### F
###### FE
###### FED
###### FEDC
###### FEDCB
###### FEDCBA
##### Note: If your system doesn't use ASCII or some other code that encodes letters in numeric order, you can use the following to initialize a character array to the letters of the alphabet:
###### char lets[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
##### Then you can use the array index to select individual letters; for example, lets[0] is 'A', and so on.

##### 2. (Ch.6 - 4): Have a program request the user to enter an uppercase letter. Use nested loops to produce a pyramid pattern like this:
###### <h2 align='center'> A
###### <h3 align='center'> ABA
###### <h4 align='center'> ABCBA
###### <h5 align='center'> ABCDCBA
###### <h6 align='center'> ABCDEDCBA
##### The pattern shoudl extend to the character entered. For example, the preceding pattern would result from an input value of E. Hint: Use an outer loop to handle the rows. Use three inner loops in a row, one to handle the spaces, one for printing letters in ascending order, and one for printing letters in descending order. If your system doesn't use ASCII or a simillar system that represents letters in strict number order, see the suggestion in programming exercise 3.

##### 3. (Ch.6 - 11): Consider these two infinite Series:
###### 1.0 + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 + ...
###### 1.0 - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 + ...
##### Write a program that evaluates running totals of these two series up to some limit of number of terms. Have the user enter the limit interactively. Look at the running totals after 20 terms, 100 terms, 500 terms. Does either series appear to be converging to some value? Hint: -1 times itself an odd number of times is -1, and -1 times itself an even number of times is 1.
