"""
find the missing number: 1, 2, 3, 4, 6
output : 5
"""

num = int(input("Enter The size of your number: "))
# numbers = []
sum = 0

for i in range(num-1):
    numbers = int(input())
    sum += numbers
    
tot_num = ((num + 1) * num)/2

missing_num = tot_num - sum
print(int(missing_num))

    
