'''In this exercise list elements represent prison cells
with 0 representing locked and 1 unlocked cell. 
Moving along, prisoners are freed if a cell is unlocked, but
every time a prisoner is freed every locked cell goes unlocked
and every unlocked cell goes locked (0s become 1s and 1s become 0s ).
The task is to find the number of freed prisoners'''

import random

def prison_break(cell_num):    
    my_list = [0, 1]
    # List of 0s and 1s is created
    prison = random.choices(my_list,  k = cell_num)
    freed_prisoners = 0
    unlocked = True
    for cell in prison:
        if cell == unlocked:
            freed_prisoners += 1            
            unlocked = not unlocked            
    print(prison)
    print('Number of freed prisoners: ', freed_prisoners)

prison_break(23)


   