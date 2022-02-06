n,m,a=map(int,input().split())

sq=n*m
a=a*a
if(a>=sq):
  print(1)
else:
 ans=0
 while(1):
   if(a<=sq):
      a=a*2
      ans+=2
   else:
      print(ans)
      break
