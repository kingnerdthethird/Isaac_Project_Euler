sum = 0
a, b, c = 0, 1, 1

while c <= 4000000:
    a, b, c = b, c, b + c
    if c % 2 == 0:
        sum = sum + c

print(sum)