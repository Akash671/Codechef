
def f(A,B):
   A=str(A)
   B=str(B)
   n1=len(A)
   n2=len(B)
   print(A)
   print(B)
   #A=sorted(A,reverse=False)
   #B=sorted(B,reverse=False)
   #print(A)
   #print(B)
   print(n1)
   print(n2)
   c=0
   for i in A:
     if i not in B:
        c+=1
   for i in B:
      if i not in A:
         c+=1
   return abs(n1-n2)
A=input()
B=input()
#print(dup(A))
print(f(A,B))
