import numpy as np

def IsPalindrome(num):
    new, temp = int(0), int(num)
    while temp > 0:
        new, temp = 10*(new + temp % 10), int(temp / 10)
        
    if int(new / 10) == num:
        return True

    else:
        return False

prod = 0

for i in range(999, 99, -1):
    for j in range(999, 99, -1):
        if IsPalindrome(i * j) and i * j > prod:
            prod = i * j
            break

print(prod)