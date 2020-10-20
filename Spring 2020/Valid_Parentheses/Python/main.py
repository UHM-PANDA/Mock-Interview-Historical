def is_well_formed(string):
    left_chars, lookup = [], {'(': ')', '{': '}', '[': ']'}
    for char in string:
        if char in lookup:
            left_chars.append(char)
        elif not left_chars or lookup[left_chars.pop()] != char:
            return False
    return not left_chars


# Time Complexity: O(n)
# Space Complexity: O(1)

