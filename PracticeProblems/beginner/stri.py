import time 
start_time= time.time()
def stri(s):
    c=0
    if len(s)>0:
        for i in range(len(s)):
            if s[len(s)-i]==" ":
                break
            else:
                c+=1
        return c
    else:
        return 0
s=str(input())
print(stri(s))

print("%s secound" % (time.time()-start_time))