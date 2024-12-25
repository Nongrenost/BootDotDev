def get_most_common_enemy(enemies_dict):
    max_so_far = float("-inf")
    most_common = ""
    for enemy in enemies_dict:
        if enemies_dict[enemy] > max_so_far:
            max_so_far = enemies_dict[enemy]
            most_common = enemy

    if max_so_far < 0:
        return None
    else:
        return most_common
