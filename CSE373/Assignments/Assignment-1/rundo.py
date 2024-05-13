import random
import time
myList = []
def getRandomNumberList(length):
    for i in range(length):
        myList.append(random.randint(0, 10001))
    return myList

RandomNumberList = getRandomNumberList(19)
# quickSort


import random

def Partition(A, p, r):
    # Randomly select a pivot index
    pivot_index = random.randint(p, r)
    A[r], A[pivot_index] = A[pivot_index], A[r]  # Move pivot element to the end
    
    x = A[r]
    i = p - 1
    
    for j in range(p, r):
        if A[j] <= x:
            i += 1
            A[i], A[j] = A[j], A[i]  # swap the value
    
    A[i+1], A[r] = A[r], A[i+1]
    
    return i + 1  # returning pivot index 


def QuickSort(A, p, r):
    if p < r:
        q = Partition(A, p, r)
        QuickSort(A, p, q-1)
        QuickSort(A, q+1, r)  # Fixing the recursive call here

# Example usage:
import time

# Quick Sort unsorted list
A = RandomNumberList

# print("Original list:", A)

start_time = time.time()
QuickSort(A, 0, len(A)-1)
end_time = time.time()

# print("Sorted list:", A)
execution_time = end_time - start_time
print("Execution time:", execution_time)

print(RandomNumberList)
print(A)


