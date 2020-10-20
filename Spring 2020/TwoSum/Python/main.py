def two_sum(a,b):
    look_up_table = {}

    for i in a:
        if i in look_up_table:
            return True
        look_up_table[b - i] = i

    return False

def two_sum_brute_force(a, b):
    for i in range(len(a)):
        for j in range(i + 1, len(a)):
            if a[i] + a[j] == b:
                return True

    return False
