N, K, A, B = map(int, input().split())

k = A // B

if k != 0: 
  m = min(N, K-1)
  print(k + k // m)
  
else: print(0)