def get_num_guesses(length):
    guesses = 0
    
    for i in range(length):
        guesses += 26 ** (i + 1)
        
    return guesses
    