def longestBigram(words):
   splitWords = words.split()   

   maxLength = 0
   result = []
   for i in xrange(0, len(splitWords)-1):
      currLength = len(splitWords[i]) + len(splitWords[i+1])
      if currLength > maxLength:
         maxLength = currLength 
         result = [splitWords[i], splitWords[i+1]]

   return result

print(longestBigram("Westbrook is GOAT"))
print(longestBigram("One must have a mind of winter"))