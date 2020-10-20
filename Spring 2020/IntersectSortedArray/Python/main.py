import bisect

def intersect_two_sorted_arrays_brute_force(A, B):
    return [a for i, a in enumerate(A) if (i == 0 or a != A[i - 1]) and a in B]
# Time Complexity: O(mn)

def intersect_two_sorted_arrays_binary_search(A, B):
    def is_present(k):
        i = bisect.bisect_left(B, k)
        return i < len(B) and B[i] == k

    return [
    a for i, a in enumerate(A) if (i == 0 or a != A[i - 1]) and is_present(a)]

# Time Complexity: O(nlog(m))
# Best If One Array is Smaller than the Other

def intersect_two_sorted_arrays_iterate(A, B):
    i, j, intersection_A_B = 0, 0, []
    while i < len(A) and j < len(B):
        if A[i] == B[j]:
            if i == 0 or A[i] != A[i - 1]:
                intersection_A_B.append(
            i, j = i + 1, j + 1
        elif A[i] < B[i]:
            i += 1
        else:
            j += 1

    return intersection_A_B
# Time Complexity: O(m + n)
