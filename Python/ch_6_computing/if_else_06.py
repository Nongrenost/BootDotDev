def player_status(health):
    if health < 0 or health == 0:
        return "dead"
    elif health <= 5:
        return "injured"
    else:
        return "healthy"
