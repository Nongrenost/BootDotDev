def should_serve_customer(customer_age, on_break, time):
    if customer_age >= 21 and not on_break and (10 >= time >= 5):
        return True
    else:
        return False
