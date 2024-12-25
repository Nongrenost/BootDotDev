def does_attack_hit(attack_roll, armor_class):
    if attack_roll == 20 or ((attack_roll >= armor_class) and attack_roll != 1):
        return True
    else:
        return False

