''' The task is to put list of strings in alphabetic order without
using built in sort() command.'''

def min_value(list):
    # This function identifies the first element in numerical order (minimum value).
    # Corresponding letters of each element are compared.
    min_value = list[0]
    for element in list[1:]:
        if element[0] < min_value[0]:
            min_value = element  
        j = 0
        try:
            while element[j] == min_value[j]:
                j += 1   
                if len(element) == j:
                    min_value = element         
                if element[j] < min_value[j]:
                    min_value = element
        except IndexError:
            pass  
    return min_value

def sorted(list):
    # Function min_value() is called to create new, sorted list.   
    sorted_list = []
    while len(list) > 0:
        element = min_value(list)
        sorted_list.append(element)
        list.remove(element)
    return sorted_list         

sample_list = ['apple','beetroot', 'check', 'apps', 'Fred', 'banana', 'append', 'zip', 'a', 'Zack','Anna' ]  
result = sorted(sample_list) 
print(result)

    