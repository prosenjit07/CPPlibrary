def is_progressive_square(n, c, d, arr):
    for i in range(n):
        for j in range(n):
            if i == 0 and j == 0:
                continue
            if i == 0:
                if arr[i+1,j] != arr[i*n+j-1] + d:
                    return "NO"
            elif j == 0:
                if arr[i*n+j] != arr[(i-1)*n+j] + c:
                    return "NO"
            else:
                if arr[i*n+j] != arr[i*n+j-1] + d or arr[i*n+j] != arr[(i-1)*n+j] + c:
                    return "NO"
    return "YES"

t = int(input())
for _ in range(t):
    n, c, d = map(int, input().split())
    arr = list(map(int, input().split()))
    print(is_progressive_square(n, c, d, arr))