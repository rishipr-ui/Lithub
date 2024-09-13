import math

def find_city_code_length(phone_numbers):
    minimum_length = min(len(num) for num in phone_numbers)
    maximum_possible_length = math.floor(minimum_length / 2)

    if any(len(num) != len(phone_numbers[0]) for num in phone_numbers):
        return -1

    for length in range(maximum_possible_length, 0, -1):
        prefix = phone_numbers[0][:length]
        if all(num.startswith(prefix) for num in phone_numbers):
            return length

    return -1

test_cases = int(input())
results = []

for _ in range(test_cases):
    n = int(input())
    phone_numbers = [input().strip() for _ in range(n)]
    result = find_city_code_length(phone_numbers)
    results.append(result)

for res in results:
    print(res)