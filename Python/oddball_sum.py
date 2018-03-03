def oddball_sum(nums):
   sum = 0;

   for n in nums:
      if(n%2 == 1):
         sum += n

   return sum


a = [1, 2, 1]

print(oddball_sum(a))