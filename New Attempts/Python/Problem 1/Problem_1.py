sum = 0

for i in range(1, 1000):
    if i % 15 == 0 or i % 5 == 0 or i % 3 == 0:
        sum = sum + i

print(sum)