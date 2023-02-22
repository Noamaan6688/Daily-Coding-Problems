# Hi
t=int(input())
while t>0:
    r = int(input())
    l = list(map(int, input().split()))[0:r]
    print(r-l.count(min(l)))
    t-=1