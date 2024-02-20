def fun(N):
    operations = 0
    for digit in N:
        if digit not in ['4', '7']:
            operations += 1
    return operations
T = int(input())
for _ in range(T):
    N = input().strip()

    print(fun(N))
