name = "Utilities"

import numpy as np

def IsPrime(n):
    if n == 1:
        return False
    
    for i in range(2, int(np.sqrt(n)) + 1):
        if n % i == 0:
            return False

    return True