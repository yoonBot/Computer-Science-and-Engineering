# <h1 align='center'> Ch. 1 ~ 2 Algorithm Notes and Interpretations

## 1. Insertion Sort 
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
#### Running Time T(n)
##### General: 
##### T(n) = c1(n) + c2(n - 1) + 0(n - 1) + c4(n - 1) + c5(summation(n; j = 2; tj)) + c6(summation(n; j = 2; tj - 1)) + c7(summation(n; j = 2; tj - 1)) + c8(n - 1)
##### Best-case running time - when elements of the array/list are already sorted from descending to ascending order: 
##### T(n) = c1(n) + c2(n - 1) + c4(n - 1) + c5(n - 1) + c8(n - 1) = (c1 + c2 + c4 + c5 + c8)n - (c2 + c4 + c5 + c8)
##### Worst-case running time - when elements of the array/list are already sorted from ascending to descending order: 
##### T(n) = c1(n) + c2(n - 1) + c4(n - 1) + c5((n(n + 1)) / 2 - 1) + c6(n(n - 1) / 2) + c7(n(n - 1) / 2) + c8(n - 1) = (c5 / 2 + c6 / 2 + c7 / 2)n^2 + (c1 + c2 + c4 + c5 / 2 - c6 / 2 - c7 / 2 + c8)n - (c2 + c4 + c5 + c8)

## 2. Merge Sort 
#### Pseudocode
```C
  Merge-Sort(Array,l,r)
    if l < r
      middle m = [(l + r)/2]
      Merge-Sort(Array,l,m)
      Merge-Sort(Array,m + 1,r)
      Merge(A,l,m,r)
```
#### Algorithm Interpretation 
##### 0. In the mergeSort algorithm, the array recursively splits itself into halves until there is one element left each. 
##### 1. Find the middle point to divide the array into two halves: middle m = l + (r - l) / 2, where l = left and r = right element sizes. 
##### (we always call mergeSort(array, 0, array_size - 1) because left value (size) is 0 and we want to find the midpoint between 0 and the final size (size - 1). )
##### 2. Call mergeSort for first half: Call mergeSort(arr, l, m)
##### 3. Call mergeSort for the second half: Call mergeSort(arr, m+1, r)
##### 4. Merge the two halves sorted in step 2 and 3: Call merge(arr, l, m, r)

```C
  Merge(A,l,m,r)
    n1 = m - l + 1
    n2 = r - m
    let L[1..n1 + 1] and R[1..n2 + 1] be new arrays
    for i = 1 to n1
      L[i] = A[l + i - 1]
    for j = 1 to n2
      R[j] = A[m + j]
    L[n1 + 1] = infinity
    R[n2 + 1] = infimity
    i = 1
    j = 1
    for k = l to r
      if L[i] <= R[j]
        A[k] = L[i]
        i++
      else 
        A[k] = R[j]
        j++        
```
#### Algorithm Interpretation 
##### 0. In the merge algorithm, the divided (sub)subarrays are stored in left and right major subarrays, and then finally merging into one large array. 
##### 1. Find the starting point of the left and right subarrays, which are (n1) = (m - 1) + 1 and (n2) = (r - m) respectively. 
##### 2. Create temporary Left and Right subarrays L[n1], R[n2] (store left -> middle elements to L[] array and middle -> right elements to R[]. )
##### 3. Compare Left[] array values and Right[] array values at the same index prior to merging
##### 4. Merge the two arrays into one. 


