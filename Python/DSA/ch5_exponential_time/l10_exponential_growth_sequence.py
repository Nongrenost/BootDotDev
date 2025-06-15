def exponential_growth(n, factor, days):
    followers_per_day = [n]
    total = n
    for day in range(0, days):
        total = total * factor
        followers_per_day.append(total)
    return followers_per_day
    
