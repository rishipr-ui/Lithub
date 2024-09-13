def farthest_distance(forest):
    maximum_distance = 0
    current_distance = 0
    for tree in forest:
        if tree == 0:
            current_distance += 1
        else:
            maximum_distance = max(maximum_distance, current_distance)
            current_distance = 0
    return max(maximum_distance, current_distance)

t = int(input())
results = []

for _ in range(t):
    n = int(input())
    forest = list(map(int, input().split()))
    results.append(farthest_distance(forest))

for result in results:
    print(result)