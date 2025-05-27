def get_follower_prediction(follower_count, influencer_type, num_months):
    factor = 2
    if influencer_type == "fitness":
        factor = 4
    if influencer_type == "cosmetic":
        factor = 3
    
    return follower_count * (factor ** num_months)
    