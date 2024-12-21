def unlock_achievement(before_xp, ach_xp, ach_name):
    total_xp = before_xp + ach_xp
    alert = f"Achievement Unlocked: {ach_name}"
    return total_xp, alert
