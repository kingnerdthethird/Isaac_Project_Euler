from ... import Utilities as util

n, count = 1, 0

while count < 10001:
    n += 1
    if util.IsPrime(n):
        count += 1

print(n)