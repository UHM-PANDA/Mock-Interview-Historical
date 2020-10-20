def string_palindrome(string):
    for i in range(len(string)):
        if string[i] != string[len(string) - i - 1]:
            return False
    return True

print(string_palindrome("baab"))
