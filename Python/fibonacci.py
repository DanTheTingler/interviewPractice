#A non-recursive solution to generating the fibonacci sequence
def fibonacci(n):

   if(n == 0):
      return []
   if(n == 1):
      return [0]

   #the two initial numbers in the fibonacci sequence
   result = [0, 1]
   while(len(result) < n):
      #add the 2nd to last and last element in result and add it to the array
      result.append(result[-2] + result[-1])

   return result


#test cases
print(fibonacci(5))
print(fibonacci(10))
print(fibonacci(13))