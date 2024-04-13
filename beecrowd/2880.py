m = input()
c = input()

quant = len(m) - len(c) + 1

x = 0
quant2 = len(c)

for i in range(quant):
    print(" " * x, c)
    x += 1
