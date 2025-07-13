import math


def prime_factors(n):
    
    prime_factors = []
    
    while True:
        if n % 2 == 0:
            prime_factors.append(2)
            n = n / 2
        else:
            break
    
    sq_root_n = int(math.sqrt(n))
    
    for i in range(3, (sq_root_n + 1), 2):
        
        while True:
            if n % i == 0:
                n = n / i
                prime_factors.append(i)
            else:
                break
    if n > 2:
        prime_factors.append(n)
            
     
    
    return sorted([int(i) for i in prime_factors])
            
            
            
            