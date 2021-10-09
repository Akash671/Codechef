for _ in range(int(input())):
   n,d=map(int,input().split())
   s=str(n)
   l=len(s)

   if d==0:
      ind2=l
      for i in range(l):
         if s[i]=='0':
            s[i]='1'
            ind2=i
            break
      for j in range(ind2+i,l):
         s[j]='1'
   elif d==9:
      if(s[0]=='9'):
         for i in range(l):
            s[i]='0';
         s='1'+s
      else:
        f=0
        ind=l
        for i in range(l):
          if(s[i]=='9'):
              for k in range(i-1,-1,-1):
                if s[k]<='7':
                  s[k]+=1
                  ind=k
                  f=1
              if(f==0):
                for i in range(l):
                    s[i]='0'
                s='1'+s
        if(f==1):
            for j in range(ind+1,l):
                s[j]='0'
   else:
       for i in range(l):
           if(int(s[i])==d):
               s[i]=s[i]+1
               break
       for j in range(i+1,l):
           s[j]='0'
   ans=int(s)
   print(ans-n)
                
