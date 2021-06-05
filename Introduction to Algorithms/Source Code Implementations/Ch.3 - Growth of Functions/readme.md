# <h1 align='center'> Ch. 3. Notes

### Reminder:
#### 1. There are no notable algorithms, therefore source codes, on this chapter, so there are no codes uploaded here.
#### 2. Instead, here are the notes for Chapter 3. 

### **`0. Assymptotic Efficiency of Algorithms: >`**
#### how the running time of an algorithm increases with the size of the input in the limit, as the size of the input increases without bound.

## A. Assymptotically Tight Bounds
### **`1. Theta-Notation: >`**
#### For a given function g(n), we denote by Theta(g(n)) the set of functions:
#### -> Theta(g(n)) = { f(n): there exist positive constants c1, c2, and n0 such that 0 <= c1g(n) <= f(n) <= c2g(n) for all n >= n0 }
#### In other words, f(n) is "sandwiched" on or between c1g(n) and c2g(n). 
#### Holds constant bounds.
### **`2. Big O-Notation: >`**
#### For a given function g(n), we denote by O(g(n)) the set of functions:
#### -> O(g(n)) = { f(n): there exist positive constants c and n0 such that 0 <= f(n) <= cg(n) for all n >= n0 }
#### In other words, f(n) is on or below cg(n)
#### Holds upper bounds
#### Used for annotating worst-case runtimes 
### **`3. Big Omega-Notation: >`**
#### For a given function g(n), we denote by Big Omega(g(n)) the set of functions:
#### -> Big Omega(g(n)) = { f(n): there exist positive constants c and n0 such that 0 <= cg(n) <= f(n) for all n >= n0 }
#### In other words, f(n) is on or above cg(n)
#### Holds lower bounds
#### Used for annotating best-case runtimes
## B. Not Assymptotically Tight Bounds
### **`Difference: >`**
#### In Assymptotically Tight Bounds, the bounds hold for "some" constants c > 0
#### In Non Assymptotically Tight Bounds, the nounds hold for "all" constants c > 0
#### Refer to Fig 3.1 in the book, where f(n) actually goes above cg(n) for some constants c in Big O-Notation Graph and f(n) goes below cg(n) for some constants c in Big Omega-Notation. 
### **`1. Little O-Notation: >`**
#### -> o(g(n)) = { f(n): for any positive constant c > 0, there exists a constant n0 > 0 such that 0 <= f(n) < cg(n) for all n >= n0 }
#### (Note that cg(n) is not inclusive (exclusive), so there are no points where f(n) even touches cg(n) in the graph. All parts of f(n) in all constants c must be below cg(n). )
#### Still holds upper bounds
### **`2. Little w (Omega)-Notation: >`**
#### -> w(g(n)) = { f(n): for any positive constant c > 0, there exists a constant n0 > 0 such that 0 <= cg(n) < f(n) for all n >= n0 }
#### (Note that cg(n) is not inclusive (exclusive), so there are no points where f(n) even touches cg(n) in the graph. All parts of f(n) in all constants c must be above cg(n). )
