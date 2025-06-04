def get_avg_brand_followers(all_handles, brand_name):
    brand_count = 0
    total_influencers = 0
    for influencer in all_handles:
        total_influencers += 1
        for follower in influencer:
            if brand_name in follower:
                brand_count +=1

    average = brand_count / total_influencers
    return average
    