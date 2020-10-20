def generate_primes(n):
    primes = []
    is_prime = [False, False] + [True] * (n - 1)
    for p in range(2, n + 1):
        if is_prime[p]:
            primes.append(p)
            for i in range(p * 2, n + 1, p):
                is_prime[i] = False
    return primes 

def generate_primes_brute_force(n):
    primes = []
    for i in range(2, n):
        prime = True
        for j in range(2, i):
            if i % j == 0:
                prime = False
                break
        if prime:
            primes.append(i)
    return primes

print(generate_primes(25))
print(generate_primes_brute_force(25))
