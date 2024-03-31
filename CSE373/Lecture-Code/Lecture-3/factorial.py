def factorial(n):
    if n == 0:
        return 1
    else:
        partialAnswer = factorial(n-1)
        return n * partialAnswer

print(factorial(5))