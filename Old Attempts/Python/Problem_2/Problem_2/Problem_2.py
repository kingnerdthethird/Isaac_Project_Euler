f_1 = 1
f_2 = 1
f_3 = f_1 + f_2
sum = 0

while f_3 < 4000000:
    if f_3 % 2 == 0:
        sum += f_3
    f_1 = f_2
    f_2 = f_3
    f_3 = f_1 + f_2

print (sum)