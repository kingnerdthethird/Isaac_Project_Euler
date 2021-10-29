number, z = 600851475143, 2

while z * z <= number:
    if number % z == 0:
        number /= z
    else:
        z += 1

print(number)