def Palindrome(number):
    y, temp = 0, number
    while temp > 0:
        y += temp % 10
        temp /= 10

    if y == number:
        return True
    return False

number = 0

for i in range(1000, 100, -1):
    for j in range(1000, 100, -1):
        if (i * j) > number and Palindrome(i * j):
            number = (i * j)

print (number)