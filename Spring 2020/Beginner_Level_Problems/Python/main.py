# Function which takes in two booleans and a character
# Return the two booleans combined with the operator
def boolean_operator(operator, boolean_1, boolean_2):
    if operator == '&':
        return boolean_1 & boolean_2
    if operator == '|':
        return boolean_1 | boolean_2
    if operator == '^':
        return boolean_1 ^ boolean_2
    return 'Not found'

# Function which takes in a list
# Return the number of 9's in the list
def number_of_nines(A):
    return len([x for x in A if x == 9])

# Function which takes in a list of length n
# Return a list of length n with the max value in the list
def max_list(nums):
    return [max(nums)] * len(nums)

# Function that counts the number of even numbers in the array
def even_array(nums):
    return len([i for i in nums if i % 2 == 0])

# Function that counts number of times substring appears in array
def count_substring(sub_string, string):
    return len([i for i in range(len(string) - len(sub_string) + 1) if string[i:i + len(sub_string)] == sub_string])

# Function that counts the number of occurrences in an array
def count_occurrences(element, sample):
    return sample.count(element)
