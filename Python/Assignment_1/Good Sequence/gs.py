num = int(input())

l = list(map(input().split()))

c=0
for value in l:
    c1=0
    for v in l:
        if value==v:
            c1=c1+1
    if value!=c1:
        c=c+1

print(c)