import math
def num_possible_orders(num_posts):
    if num_posts == 0:
       return 1
    return num_posts * num_possible_orders(num_posts - 1)

    """
    fact = num_posts
    for num in range(1, num_posts):
        fact = fact * num
    return fact
    """ 
       
    #return math.factorial(num_posts)
