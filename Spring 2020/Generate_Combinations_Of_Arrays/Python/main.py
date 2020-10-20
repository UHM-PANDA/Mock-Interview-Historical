import math

def generate_combinations_of_array(array):
    return None

def generate_combinations(n, k):
    result = [[i for i in range(k)]]
    while result[-1][0] != n - k:
        result.append(generate_next_combination(n, result[-1][:]))
    return result

def generate_next_combination(n, array):
    if array[-1] == n:
        i = -1
        while array[i] == n + i + 1:
            i -= 1
        array = array[:(i + len(array))] + [j + array[i] + 1 for j in range(-i)]
    else:
        array[-1] += 1

    return array

for i in range(1, 10):
    for j in range(i + 1, 10):
        print(j, " ", i)
        print(generate_combinations(j, i))
