# <h1 align='center'> Ch. 1 ~ 2 Algorithm Notes and Interpretations

## Insertion Sort 
#### Pseudocode
```C
  Insertion-Sort(A)
    for j = 1 to A.length
    key = A[j]
    // Insert A[j] into the sorted sequence A[0..j - 1].
    i = j - 1
    while i > 0 and A[i] > key
      A[i + 1] = A[i]
      i--
    A[i + 1] = key

```
#### Algorithm Interpretation 
##### 1. Iterate from arr[1] to arr[n] over the array. (You dont want to start from arr[0] because arr[0] does not have a predecessor.)
##### 2. Compare the current element (key) to its predecessor.
##### 3. If the key element is smaller than its predecessor, compare to the elements before the predecessor. 
##### 4. Move the greater elements one position up to make space for swapped element (key)

## Merge Sort 
#### Pseudocode
```C
  Merge(A,p,q,r)
    n1 = q - p + 1
    n2 = r - q
    let L[1..n1 + 1] and R[1..n2 + 1] be new arrays
    for i = 1 to n1
      L[i] = A[p + i - 1]
    for j = 1 to n2
      R[j] = A[q + j]
    L[n1 + 1] = infinity
    R[n2 + 1] = infimity
    i = 1
    j = 1
    for k = p to r
      if L[i] <= R[j]
        A[k] = L[i]
        i++
      else 
        A[k] = R[j]
        j++        
```
