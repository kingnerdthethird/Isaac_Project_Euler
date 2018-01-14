def palindrome(number):
    x = number
    y = 0
    pal = False
    while(x > 0):
        y *= 10
        y += x % 10
        x /= 10
    if(y == number):
        pal = True
    return pal;

#number = 0
#temp = 0

#for i in range (1000, 100, -1):
#    for j in range (1000, 100, -1):
#        temp = i * j
#        if (temp > number):
#            if(palindrome(temp)):
#                number = temp

#print(temp)

print(palindrome(9009))
print(palindrome(9909))