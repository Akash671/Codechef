'''author : @akash kumar'''
for _ in range(int(input())):
    
    l = input()
    d={}
    g={}
    if len(l)%2==0:
        a = len(l)//2
        for i in range(0,a):
            
            if l[i] in d:
                
                d[l[i]]+=1
            else:
                
                d[l[i]]=1
        
        
        for i in range(a,len(l)):
            
            if l[i] in g:
                
                g[l[i]]+=1
            else:
                
                g[l[i]]=1
        
        
    else:
        
        a = len(l)//2
        
        for i in range(0,a):
            if l[i] in d:
                
                d[l[i]]+=1
            else:
                
                d[l[i]]=1
        for i in range(a+1,len(l)):
            
            if l[i] in g:
                
                g[l[i]]+=1
            else:
                
                g[l[i]]=1
    if d==g:
        print("YES")
    else:
        print("NO")
            
    
