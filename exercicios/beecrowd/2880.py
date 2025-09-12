m = input()
c = input()

quant = len(m) - len(c) + 1
y = 0
resp = 0

for i in range(quant):
    x = 0
    for l in range(len(c)):
        if(c[x] == m[l+y]): 
            break
        else:
            x += 1
    if(x == len(c)):
        resp += 1
    y += 1

print(resp)