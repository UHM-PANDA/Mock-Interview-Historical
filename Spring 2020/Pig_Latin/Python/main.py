import re

def pig_latin(sentence):
    sentence = sentence.split(' ')
    result = ''
    for word in sentence:
        first_vowel = re.findall(r'[aeiouAEIOU]', word)[0]
        index = word.find(first_vowel)
        result += word + 'way ' if not index else word[index:] + word[:index] + 'ay '
    return result[:len(result) - 1]

def pig_latin_brute_force(sentence):
    result = ''
    vowel = {'a' : True, 'e' : True, 'i' : True, 'o' : True, 'u' : True}
    sentence = sentence.split(' ')
    for word in sentence:
        if word[0].lower() in vowel:
            result += word + 'way '
        else:
            i = 1
            while i < len(word) and not(word[i] in vowel):
                i += 1
            result += word[i:] + word[:i] + 'ay ' 

    return result[:len(result) - 1]

print(pig_latin('   Hello   There YOu    '))
