import math

def isPrime(n):

   if(n == 1):
      return False
   if(n == 2):
      return True
   if(n == 3):
      return True

   if(n % 2 == 0):
      return False
   if(n % 3 == 0):
      return False   

   #the smaller of the two factors of a non-prime number will always be <= sqrt(number)
   #simplifies algorithm to O(sqrt(n))
   for i in xrange(4, math.trunc(math.sqrt(n))):
      if(n % i == 0):
         return False

   return True


def getFactors(n):

   if(n == 1):
      return [1]
   if(n == 2):
      return [1, 2]

   factors = []
   for i in xrange(1, int(math.sqrt(n))+1):
      if(n%i == 0):
         factors.append(i)
         factors.append(n/i)

   return factors


def numPrimeFactors(n):
   factorList = getFactors(n)

   primeCount = 0
   for n in factorList:
      if(isPrime(n)):
         primeCount += 1

   return primeCount 


print(numPrimeFactors(120))


