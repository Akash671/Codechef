"""
Author : Akash Kumar
"""

for _ in range(int(input())):
   s=str(input())

   #logic here
   z=0
   o=0
   n=len(s)
   if n==1:
      print(0)
   elif n==2:
      if s=='00':
         print(0)
      elif s=='11':
         print(0)
      else:
        print(1)
   else:
    for i in s:
     if i=='1':
        o+=1
     else:
        z+=1
    if o==n or z==n:
      print(0)
    else:
     #5 3 3
     #4 2 3
     z=0
     o=0
     a=[]
     b=[]
     #0001
     n=len(s)
     #100011
     for i in range(n):
         if s[i]=='0':
             z+=1
             a.append(o)
             o=0
         else: 
            o+=1
            b.append(z)
            z=0
     a.append(o)
     b.append(z)
     
     #print(a)
     #print(b)
     tmp=0
     tmp2=0
     a1=0
     b1=0
     for i in a:
        if i>1:
           tmp+=1
        if i==1:
           a1+=1
     for i in b:
         if i>1:
           tmp2+=1
         if i==1:
            b1+=1
     #print(tmp,tmp2)
     ans=0
     if tmp<tmp2:
        for i in a:
            if i==1:
               ans+=1
            elif i>1:
               ans+=2
            else:
               continue
     elif tmp==tmp2:
      if a1>b1:
        for i in b:
           if i==1:
              ans+=1
           elif i>1:
              ans+=2
           else: 
              continue
      else:
         for i in a:
            if i==1:
              ans+=1
            elif i>1:
              ans+=2
            else:
              continue
     else:
        for i in b:
           if i==1:
              ans+=1
           elif i>1:
              ans+=2
           else:
              continue
     print(ans)
