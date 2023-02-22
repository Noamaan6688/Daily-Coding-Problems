# Hi
l=list(map(int,input().split("+")))
l.sort()
for x in l[:len(l)-1]:
    print(x,'+',sep="",end="")
print(l[len(l)-1])