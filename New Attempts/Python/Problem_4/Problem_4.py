import math

def Palindrome(number):
    temp = number
    digits = []
    while temp > 0:
        digits.append(temp % 10)
        temp /= 10
        
    new = 0
    for i in range(0, len(digits)):
        new *= 10
        new += digits[i]
        
    if new == number:
        return True
    else:
        return False
    
number = 0

for i in reversed(range(100, 999)):
    for j in reversed(range(100, 999)):
        if (i * j) > number and Palindrome(i * j):
            number = (i * j)
            
print(number)