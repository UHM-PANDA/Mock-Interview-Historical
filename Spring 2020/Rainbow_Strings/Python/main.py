import math
def rainbow_strings(string):
    duplicates = {}
    total_combinations = [math.comb(len(string), i) for i in range(0, len(string) + 1)]
    for i in string:
        if i not in duplicates:
            duplicates[i] = 0
        duplicates[i] += 1
    
    return total_combinations

print(rainbow_strings("aabc"))
