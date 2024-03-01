"""
    Given a sorted array and an integer value (say sum), design an algorithm that will determine if
    there exists a pair of integer whose sum is equal to sum
"""
size = int(input('Enter the size of arr: '))
target_sum = int(input("enter your target Sum: "))
sorted_arr = []
for i in range(size):
    sorted_arr.append(int(input()))
    

# def twoSum(list, target_sum):
#     flag = False
#     for i in range(len(list)): # O(n)
#         for j in range(i+1, len(list)):  # O(n)
#             if list[i] + list[j] == target_sum:
#                 print('got it and the num ', list[i], list[j])
#                 flag = True
#                 return
#     print('Sum does not exists')

# # time complexity O(n * n) = O(n^2)
    
    
def twoSum(sorted_arr, target_sum):
    left = 0
    right = len(sorted_arr) - 1
    
    while left < right: # O(n)
        current_sum = sorted_arr[left] + sorted_arr[right]
        if current_sum == target_sum:
            print('Pair found:', sorted_arr[left], sorted_arr[right])
            return True
        elif current_sum < target_sum:
            left += 1
        else:
            right -= 1
    
    print('No pair found')
    return False

twoSum(sorted_arr, target_sum)