def verify_tsp(paths, dist, actual_path):
    total_distance = 0
    for i in range(1, len(actual_path)):
        total_distance += paths[actual_path[i]][actual_path[i-1]]
    if total_distance < dist:
        return True
    return False
        