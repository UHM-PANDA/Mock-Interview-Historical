def triple_sum_brute_force(a, b):
    for i in range(len(a)):
        for j in range(i + 1, len(a)):
            for k in range(j + 1, len(a)):
                if (a[i] + a[j] + a[k] == b):
                    return True

    return False

def triple_sum(a,b):
    for index, element in enumerate(a):
        if two_sum(a[:index] + a[index + 1:], b - element):
            return True
    return False

def two_sum(a, b):
    look_up_table = {}
    for i in a:
        if i in look_up_table:
            return look_up_table[i]
        look_up_table[b - i] = i
    return False
