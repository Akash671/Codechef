for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    #...........
    #logic here
    nn=max(a)
    if n<=1000 and nn<=1000:
      f=1
      for i in range(n):
         ans=i+a[0]
         for j in range(1,n):
            ans=ans^(i+a[j])
         if ans==0:
           print(i)
           f=0
           break
      if(f):
        print(-1)
    else:
     z=0
     u=a[0]
     c=0
     for i in range(n):
       if i==0:
         z+=1
       if i==u:
          c+=1
     if z==n:
       print(0)
     elif c==n:
       print(-1)
     else:
       tmp=a[0]
       for ii in range(1,n):
          tmp=tmp^a[ii]
       if tmp==0:
          print(0)
       else:
        #10001
        #  101
        # 1001
        #11101

        #101
        #100
        # 10
        #011
        t=bin(tmp)
        t=t[2:]
        #print(t)
        t=t[::-1]
        tn=len(t)
        m=max(a)
        b=bin(m)
        b=b[2:]
        m=len(b)
        mm=m
        #-------
        def xor(aa,x):
          ans=aa[0]+x
          aa[0]=aa[0]+x
          for i in range(1,n):
             ans=ans^(aa[i]+x)
             aa[i]=aa[i]+x
          return ans,aa
        #----------
        i=0
        ans=0
        f=1
        while(i<=mm and m<=mm):
          if t[i]=='1':
             xx,a=xor(a,1<<i)
             ans+=1<<i
             i+=1
             if xx==0:
               print(ans)
               f=0
               break
             else:
               t=bin(xx)
               t=t[2:]
               t=t[::-1]
               m=len(t)
          else:
             i+=1
        if(f):
           print(-1)


#5 6 7
#101
#110
#111
#100
