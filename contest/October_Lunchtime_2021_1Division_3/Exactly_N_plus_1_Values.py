for _ in range(int(input())):
  n=int(input())
  if n<=2:
     print("1 1")
  else:
   ans=2**n
   #print(ans)
   a=[]
   tmp2=0
   tmp=0
   for i in range(1,(ans//2+1)):
      tmp+=i
      if tmp<=ans:
         a.append(i)
         tmp2=tmp
      else:
         #print(tmp2)
         #print(ans-tmp2)
         a.append(ans-tmp2)
         break
   a=sorted(a,reverse=False)
   for i in a:
     print(i,end=" ")
   print()
     
