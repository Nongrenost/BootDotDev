def take_magic_damage(health, resist, amp, spell_power):
    total_damage = spell_power * amp
    health_left = health - (total_damage - resist)
    return health_left
