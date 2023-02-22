# Hi
r=int(input())
while r>0:
    k=int(input())
    l=list(map(int,input().split()))[0:k]
    s=sum(l)
    if s%k!=0:
        print(-1)
    else:
        c=0
        a=s/k
        for x in l:
            if x>a:
                c+=1
        print(c)
    r-=1