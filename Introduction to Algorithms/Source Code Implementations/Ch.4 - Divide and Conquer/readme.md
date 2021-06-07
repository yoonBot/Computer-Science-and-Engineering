# <h1 align='center'> Ch. 4 Algorithm Notes and Interpretations

## 1. Maximum Subarray Problem 
#### Approach/Method: Divide and Conquer 
#### **`Pseudocode >`**
```C
  Find-Maximum-Subarray(A,low,high)
    if high == low
      return (low,high,A[low])      // base case: only one element
    else
      mid = [(low + high)/2]
      (left-low,left-high,left-sum) = 
        Find-Maximum-Subarray(A,low,mid)
      (right-low,right-high,right-sum) =
        Find-Maximum-Subarray(A,mid + 1,high)
      (cross-low,cross-high,cross-sum) =
        Find-Maximum-Subarray(A,low,mid,high)
      if left-sum >= right-sum and left-sum >= cross-sum
        return (left-low,left-high,left-sum)
      else if right-sum >= left-sum and right-sum >= cross-sum
        return (right-low,right-high,right-sum)
      else return (cross-low,cross-high,cross-sum)
```
#### **`Algorithm Interpretation >`**
##### 0. In the Find-Maximum-Subarray algorithm, the array splits into two halves and then returns the maximum of either the left/right portion or the entire portion that crosses the midpoint. 
##### 1. Divide the given array into two halves and find the midpoint.
##### 2. Calculate the sums of left, right, and crossing portions for comparison using recursion (the crossing part does not use recursion. Only the left and right portions do.).
##### 3. Return the maximum of either the left-sum, right-sum, or cross-sum. 
```C
  Find-Max-Crossing-Subarray(A,low,mid,high)
    left-sum = -infinity
    sum = 0
    for i = mid downto low
      sum = sum + A[i]
      if sum > left-sum
        left-sum = sum
        max-left = i
    right-sum = -infinity
    sum = 0
    for j = mid + 1 to high
      sum = sum + A[j]
      if sum > right-sum
        right-sum = sum
        max-right = j
    return (max-left,max-right,left-sum + right-sum)
```
#### **`Algorithm Interpretation >`**
##### 0. In the Find-Max-Crossing-Subarray algorithm, the left-sum traverses left of the array and the right-sum traverses right of the array and returns the maximum sum of the left and right subarrays and sum of both portions. 
##### 1. left-sum is initially assigned the lowest int value possible and then traverses left to add the maximum value it has found so far while traversing. 
##### 2. The same goes as above for right-sum
##### 3. Return the maximum sums of left-sum, right-sum, and the sum of both portions. 
#### **`Running Time T(n) >`**
##### General: 
##### -> T(n) = c1(n) + c2(n - 1) + 0(n - 1) + c4(n - 1) + c5(summation(n; j = 2; tj)) + c6(summation(n; j = 2; tj - 1)) + c7(summation(n; j = 2; tj - 1)) + c8(n - 1)
##### Worst-case running time - when elements of the array/list are already sorted from ascending to descending order: 
##### -> T(n) = Theta(1) (if n = 1)
##### -> T(n) = 2T(n/2) + Theta(n) (if n > 1)
#### Time Complexity (Big O-Notation): O(nlgn)
## 2. Prerequisite to Strassen's Algorithm (Matrix Multiplication)
#### Approach/Method: Naive; Non-Recursive
#### **`Pseudocode >`**
```C
  Square-Matrix-Multiply(A,B)
    n = A.rows
    let c be a new n x n matrix
    for i = 1 to n
      Cij = 0
      for k = 1 to n
        Cij = Cij + aik * bkj
    return C
```
