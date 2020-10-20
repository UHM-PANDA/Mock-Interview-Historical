def evaluate(expression):
    intermediate_results = []
    delimiter = ','
    operators = {'+' : lambda y, x : x + y,
            '-' : lambda y, x: x - y,
            '*' : lambda y, x : x * y,
            '/' : lambda y, x: x // y}

    for element in expression.split(delimiter):
        if element in operators:
            intermediate_results.append(operators[element](intermediate_results.pop(), intermediate_results.pop()))
        else:
            intermediate_results.append(element)

    return intermediate_results[-1]

# Time Complexity: O(n)
# Space Complexity: O(1)
