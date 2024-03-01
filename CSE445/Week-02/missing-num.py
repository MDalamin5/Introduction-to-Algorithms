sum = 0
n = int(input("enter a num: "))

for i in range(n - 1):
    value = int(input())
    sum += value

tot_sum = (n*(n+1))/2
print(tot_sum - sum)
