import math as m
 
# Returns sum of all factors of n.
def sumofFactors(n):
     
    # Traversing through all
    # prime factors
    res = 1
    for i in range(2, int(m.sqrt(n) + 1)):
         
        curr_sum = 1
        curr_term = 1
         
        while n % i == 0:
             
            n = n / i;
 
            curr_term = curr_term * i;
            curr_sum += curr_term;
             
        res = res * curr_sum
     
    # This condition is to handle the
    # case when n is a prime number
    # greater than 2
    if n > 2:
        res = res * (1 + n)
 
    return res;
 
# driver code 
n=int(input())
sum = int(sumofFactors(n))-n
if sum==n:
 print("YES")
else :
 print("NO")
 
# This code is
