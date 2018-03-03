def lucky_sevens(nums):
   runningSum = 0
   arrLength = len(nums)
   for i in xrange(0, arrLength-3):
      runningSum = nums[i] + nums[i+1] + nums[i+2]
      if(runningSum == 7):
         return True

   return False


a = [2,1,5,1,0]

if(lucky_sevens(a)):
   print("true")
else:
   print("false")



