def maxGroups(a):
  n = len(a)
  dp = [0] * (n + 1)
  for i in range(1, n + 1):
    dp[i] = i
    for j in range(1, i):
      if a[i - 1] & a[j - 1] == 0:
        dp[i] = min(dp[i], dp[j] + 1)
  max_groups = 0
  for i in range(1, n + 1):
    if dp[i] > max_groups:
      max_groups = dp[i]
  return max_groups

def main():
  t = int(input())
  for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    print(maxGroups(a))

if __name__ == "__main__":
  main()