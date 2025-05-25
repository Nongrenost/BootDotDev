def get_estimated_spread(audiences_followers):
    author_follower_count = len(audiences_followers)
    if author_follower_count == 0:
        return 0
    average_audience_followers = 0
    
    for num_followers in audiences_followers:
        average_audience_followers += num_followers


    average_audience_followers = average_audience_followers / author_follower_count

    estimated_spread = average_audience_followers * (author_follower_count ** 1.2)
    
    return estimated_spread