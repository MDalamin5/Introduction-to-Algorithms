num1 = int(input('Enter a integer number: '))
num2 = int(input('Enter a integer number: '))

def findGCD(a, b):
    while(a!=b):
        if a > b:
            a = a - b
        else:
            b = b - a
    return a

gcd = findGCD(num1, num2)
print('The GCD is: ', gcd)
print('The LCM is: ', (num1 * num2)/gcd)

