A = list(map(int, input().split()))
total = 0

for i in range(64):
    total += A[i] * (2 ** i)

print(total)