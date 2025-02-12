def get_median_font_size(font_sizes):
    if not font_sizes:
        return None
    return get_middle_number(sorted(font_sizes))


def is_even(x):
    return x % 2 == 0

def get_middle_number(list):
    if is_even_list(list):
        return list[len(list) // 2 - 1]
    return list[(len(list) // 2)]

    
def is_even_list(list):
    return is_even(len(list))