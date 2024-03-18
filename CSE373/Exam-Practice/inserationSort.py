def insertion_sort(arr):
    for j in range(1, len(arr)):
        key = arr[j]
        i = j - 1
        while i > -1 and arr[i] > key:
            arr[i + 1] = arr[i]
            i -= 1
        arr[i + 1] = key

arr = [4, 2, 7, 6, 5, 1, -1]
insertion_sort(arr)

for num in arr:
    print(num, end=" ")
