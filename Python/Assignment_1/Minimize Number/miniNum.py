c = 0
n = int(input())
n1 = list(map(int, input().split()))
flag = 0
while True:
    flag = 0
    for i in range(n):
        if n1[i] % 2 == 0:
            n1[i] = n1[i] // 2
        else:
            flag = 1
            break
    if flag == 0:
        c += 1
    else:
        break

print(c)
