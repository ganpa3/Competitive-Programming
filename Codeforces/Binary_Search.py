n, x, p = map(int, input().split())
l, r = 0, n
big = small = 0
while l < r:
    m = (l + r) // 2
    if p < m:
        r = m
        big += 1
    else:
        l = m + 1
        if  m!=p:
            small+=1
ans = 1
mod = 1000000007
for i in range(big):
    ans = ans * (n - x - i) % mod
for i in range(1, small + 1):
    ans = ans * (x - i) % mod
for i in range(1, n - small - big):
    ans = ans * i % mod
print(ans)
