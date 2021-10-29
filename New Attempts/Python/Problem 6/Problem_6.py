sum, product = 0, 0

for i in range(1, 101):
    sum, product = sum + i, product + (i * i)

print(abs(product - (sum * sum)))