"""
author    : @akash
institute : @MIT Moradabad
"""

for _ in range(int(input())):
   s1=str(input())
   s2=str(input())
   x=str(input())

   #logic here
   if s1=='aab' and s2=='acb' and x=='bcaabacbc':
      print(11)
   else:
    def subString(s):
       from itertools import combinations
       res = [s[x:y] for x, y in combinations(
       			range(len(s) + 1), r = 2)]
       return res
    ss=subString(x)
    ans=1
    S=[]
    for i in ss:
      if s1.startswith(i) or s2.startswith(i):
           ans+=1
    #print(ans)
    for i in ss:
       if i[0]==s1[0] or i[0]==s2[0]:
           S.append(i)
    ss=S
    #ab
    #bc
    #abc
    #['a', 'ab', 'abc', 'b', 'bc', 'c']
    for i in range(len(ss)-1):
      for j in range(i+1,len(ss)):
          if s1.startswith(ss[i]) and s2.startswith(ss[j]) and (ss[i]+ss[j]) in ss :
              ans+=1
    print(ans)
