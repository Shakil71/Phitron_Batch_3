str = input()
c = 0
c1 = 0
output = []
for ch in str:
    if ch == 'L':
        c =c + 1
    else:
        c1 = c1 + 1
    if c == c1:
        output.append(str[:c + c1])
        str = str[c + c1:]
        c = 0
        c1 = 0

print(len(output))
for s in output:
    print(s)