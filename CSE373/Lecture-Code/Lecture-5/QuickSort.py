def Partition(A, p, r):
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
        QuickSort(A, p+1, r)
        


A = [2, 5, 8, 3, 9, 4, 1, 7, 10, 6]
QuickSort(A, 0, len(A)-1)
print(A)

