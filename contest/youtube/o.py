# cook your dish here


def gcd(a,b):
    if a == 0:
        return b
    return gcd(b % a, a)
def lcm(a,b):
    return (a / gcd(a,b))* b
a, b=map(int, input().split())
print(gcd(a,b),end=" ")
print(int(lcm(a, b))) 
