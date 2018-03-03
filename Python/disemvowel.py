def disemvowel(word):

   finalWord = "";
   for s in word:
      if(s != 'a' and s != 'e' and s != 'i' and s != 'o' and s != 'u'):
         finalWord += s

   return finalWord


print(disemvowel("ruby"))

