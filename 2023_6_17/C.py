from collections import defaultdict

N = int(input())
A = list(map(int, input().split()))

frequency = defaultdict(list)
for i, num in enumerate(A):
    frequency[num].append(i + 1)

sorted_nums = sorted(range(1, N + 1), key=lambda x: frequency[x][1])
result = ' '.join(map(str, sorted_nums))
print(result)
