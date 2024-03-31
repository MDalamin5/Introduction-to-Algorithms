def febo(n):
    if n==0 or n==1:
        return n
    else:
        x = febo(n-1)
        y = febo(n-2)
        return x + y
    

print(febo(10))