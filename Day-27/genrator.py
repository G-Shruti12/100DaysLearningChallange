def isPrime(n):
    i=2
    while(i<n):
        if(n%i==0):
            break
        i+=1
    if(i==n):
        return i
def genrate(n):
    i=2
    while(i<n):
        if isPrime(i):
            yield i
        i+=1
def isprime(x):
    for i in range(2,x):
        if x%i==0:
            return False
    return True
def nextPrime(n):
    while not isprime(n:=n+1):
        pass 
    return n

def primeGenrator(n):
    x=2
    while n:
        if(isprime(x)):
            n-=1
            yield x
            x=nextPrime(n)
l1=[num for num in primeGenrator(10000)]
print(l1)
