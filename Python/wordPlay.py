#best way to do this is to probably use a dictionary so it's not an O(n^2) algorithm
#can the second string be spelled using letters from the first

def wordplay(sOne, sTwo):
   
   firstWord = {}
   secondWord = {}
   
   #for enumerate, the first variable in the for loop will be the number
   #the second will be the letter that's currently being iterated over in this case
   for counter, key in enumerate(sOne):
      if key not in firstWord: 
         #we want the first occurence
         firstWord[key] = counter

   #the dictionary now looks as follows:
   #the key is each individual letter of the word
   #the value is a tuple that contains the index of the letter

   indicies = []
   for letter in sTwo:
      if letter in firstWord:
         indicies.append(firstWord[letter])

   #simple way to check if a list is empty
   if not indicies or len(indicies) != len(sTwo):
      return False
   else:
      return indicies


print(wordplay('substandard', 'bad'))
print(wordplay('shadowless', 'dashes'))
print(wordplay('cartoon', 'lineograph'))

