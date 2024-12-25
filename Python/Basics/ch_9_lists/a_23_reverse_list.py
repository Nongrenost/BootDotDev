def reverse_array(items):
    reversed = []
    for i in range((len(items) - 1), -1, -1):
        reversed.append(items[i])
    return reversed


# my_list = [1, 2, 3, 4, 5]
# reversed_list = my_list[::-1]
# print(reversed_list)