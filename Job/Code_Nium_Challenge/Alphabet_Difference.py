for _ in range(int(input())):
    a=str(input())
    b=str(input())
    ans=[]
    na=len(a)
    nb=len(b)

    if na>nb:
      for i in a:
         if i not in b:
            ans.append(i)
    else:
       for i in b:
          if i not in a:
             ans.append(i)

    if len(ans)==0:
       print(-1)
    else:
      ans=set(ans)
      ans=list(ans)
      ans=sorted(ans,reverse=False)
      ss=""
      for i in ans:
        ss+=i
      print(ss)
       
       
