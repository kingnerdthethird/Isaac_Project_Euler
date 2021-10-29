i = 20

while 1:
    if not (i % 20 or i % 19 or i % 18 or i % 17 or i % 16 or i % 14 or i % 13 or i % 12 or i % 11):
        print(i)
        break
    else:
        i += 20