def can_sort_array(n, a):
    while n > 0:
        found = False
        for i in range(n):
            if a[i] > 0:
                m = 1
                while m * 2 <= n:
                    m *= 2
                for j in range(i, i + m):
                    a[j] -= 1
                found = True
                break
        if not found:
            return "NO"
        while n > 0 and a[n - 1] == 0:
            n -= 1
    return "YES"

t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    result = can_sort_array(n, a)
    print(result)
