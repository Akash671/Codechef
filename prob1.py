for t in range(int(input())):
    n = int(input())
    c = 0
    a = list(map(int, input().split()[:n]))
    a.sort()
    for i in range(n - 1):
        if a[i + 1] - a[i] > 0:
            c += 1
    print(c+1)
