import random
import time

# get Random Number List

"""def getRandomNumberList(length, upperBound):
    myList = []
    for i in range(length):
        myList.append(random.randint(0, upperBound))
    return myList"""
    
"""
--------------------------------------------------------------------------------------
                        Custome data set
--------------------------------------------------------------------------------------

"""
# Function to generate a sorted dataset
def generate_sorted_dataset(size):
    return list(range(size))

# Function to generate an unsorted dataset
def generate_unsorted_dataset(size):
    dataset = list(range(size))
    random.shuffle(dataset)
    return dataset

# Function to combine sorted and unsorted datasets
def generate_custom_dataset(size):
    half_size = size // 2
    sorted_data = generate_sorted_dataset(half_size)
    unsorted_data = generate_unsorted_dataset(half_size)
    custom_dataset = sorted_data + unsorted_data
    return custom_dataset




# myList = getRandomNumberList(10000, 5099)
myList = generate_custom_dataset(110000)










"""
--------------------------------------------------------------------------------------
                        Quick Sort
--------------------------------------------------------------------------------------

"""

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


# Quick Sort unsorted list

# its Main function Part


A = myList[:] # Copy all items from list1 to list2

start_time = time.time()
QuickSort(A, 0, len(A)-1)
end_time = time.time()
execution_time = end_time - start_time

print("Execution time QuickSort:", execution_time)

# print(myList)
# print(A)


"""
-------------------------------------------------------------------------------
                                  HeapSort
-------------------------------------------------------------------------------
"""

# Python program for implementation of heap Sort

# To heapify subtree rooted at index i.
# n is size of heap


def heapify(arr, N, i):
    largest = i  # Initialize largest as root
    l = 2 * i + 1     # left = 2*i + 1
    r = 2 * i + 2     # right = 2*i + 2

    # See if left child of root exists and is
    # greater than root
    if l < N and arr[largest] < arr[l]:
        largest = l

    # See if right child of root exists and is
    # greater than root
    if r < N and arr[largest] < arr[r]:
        largest = r

    # Change root, if needed
    if largest != i:
        arr[i], arr[largest] = arr[largest], arr[i]  # swap

        # Heapify the root.
        heapify(arr, N, largest)

# The main function to sort an array of given size


def heapSort(arr):
    N = len(arr)

    # Build a maxheap.
    for i in range(N//2 - 1, -1, -1):
        heapify(arr, N, i)

    # One by one extract elements
    for i in range(N-1, 0, -1):
        arr[i], arr[0] = arr[0], arr[i]  # swap
        heapify(arr, i, 0)


# Driver's code
if __name__ == '__main__':
    heapArr = myList[:]

    # Function call
    start_time = time.time()
    heapSort(heapArr)
    end_time = time.time()
    execution_time = end_time - start_time

    print("Execution time HeapSort:", execution_time)
    
    # N = len(arr)

    # print("Sorted array is")
    # for i in range(N):
    #     print("%d" % arr[i], end=" ")
# This code is contributed by Mohit Kumra


"""
-------------------------------------------------------------------------------
                                  InsertionSort
-------------------------------------------------------------------------------
"""

# Python program for implementation of Insertion Sort

# Function to do insertion sort
def insertionSort(arr):

    # Traverse through 1 to len(arr)
    for i in range(1, len(arr)):

        key = arr[i]

        # Move elements of arr[0..i-1], that are
        # greater than key, to one position ahead
        # of their current position
        j = i-1
        while j >= 0 and key < arr[j] :
                arr[j + 1] = arr[j]
                j -= 1
        arr[j + 1] = key


# Driver code to test above
insertionArray = myList[:]
start_time = time.time()
# insertionSort(insertionArray)
# print(insertionArray)
end_time = time.time()
execution_time = end_time - start_time

print("Execution time incSort:", execution_time)
# This code is contributed by Mohit Kumra

# print(myList)



# Python program for implementation of MergeSort

# Merges two subarrays of arr[].
# First subarray is arr[l..m]
# Second subarray is arr[m+1..r]

"""
-------------------------------------------------------------------------------
                                  MergeSort
-------------------------------------------------------------------------------
"""

def merge(arr, l, m, r):
	n1 = m - l + 1
	n2 = r - m

	# create temp arrays
	L = [0] * (n1)
	R = [0] * (n2)

	# Copy data to temp arrays L[] and R[]
	for i in range(0, n1):
		L[i] = arr[l + i]

	for j in range(0, n2):
		R[j] = arr[m + 1 + j]

	# Merge the temp arrays back into arr[l..r]
	i = 0	 # Initial index of first subarray
	j = 0	 # Initial index of second subarray
	k = l	 # Initial index of merged subarray

	while i < n1 and j < n2:
		if L[i] <= R[j]:
			arr[k] = L[i]
			i += 1
		else:
			arr[k] = R[j]
			j += 1
		k += 1

	# Copy the remaining elements of L[], if there
	# are any
	while i < n1:
		arr[k] = L[i]
		i += 1
		k += 1

	# Copy the remaining elements of R[], if there
	# are any
	while j < n2:
		arr[k] = R[j]
		j += 1
		k += 1

# l is for left index and r is right index of the
# sub-array of arr to be sorted


def mergeSort(arr, l, r):
	if l < r:

		# Same as (l+r)//2, but avoids overflow for
		# large l and h
		m = l+(r-l)//2

		# Sort first and second halves
		mergeSort(arr, l, m)
		mergeSort(arr, m+1, r)
		merge(arr, l, m, r)


# Driver code to test above
mergeArr = myList[:]
n = len(mergeArr)
# print("Given array is")
# for i in range(n):
# 	print("%d" % mergeArr[i],end=" ")
start_time = time.time()
mergeSort(mergeArr, 0, n-1)
end_time = time.time()
execution_time = end_time - start_time

print("Execution time MergeSort:", execution_time)
# print("\n\nSorted array is")
# for i in range(n):
# 	print("%d" % mergeArr[i],end=" ")

# This code is contributed by Mohit Kumra

