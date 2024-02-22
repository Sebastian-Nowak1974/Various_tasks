'''This program counts frequency of each letter in a given text
and prints the results
'''

def letter_counter(text):
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    text_low = text.lower()    
    result = {}
    for char in alphabet:
        cnt = 0
        for _ in text_low:
            if _ == char:
                cnt += 1
        result[char] = cnt
    result_string = f'letter \t frequency\n'
    for char, cnt in result.items():
        result_string += f'{char}:{cnt:>12}\n'    
    print(result_string)

sample_phrase = "For example, 'a' is the lower case version of 'A'\
 and 'w' is the lower case version of 'W'. Here are all the lower case letters in the English\
 alphabet: a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y and z."
letter_counter(sample_phrase)

