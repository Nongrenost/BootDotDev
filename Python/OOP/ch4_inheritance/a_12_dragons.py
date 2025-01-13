class Unit:
    def __init__(self, name, pos_x, pos_y):
        self.name = name
        self.pos_x = pos_x
        self.pos_y = pos_y

    def in_area(self, x_1, y_1, x_2, y_2):
        return  x_2 >= self.pos_x >= x_1 and y_2 >= self.pos_y >= y_1



class Dragon(Unit):
    def __init__(self, name, pos_x, pos_y, fire_range):
        super().__init__(name, pos_x, pos_y)
        self.__fire_range = fire_range

    def breathe_fire(self, x, y, units):
        in_blast = []
        aoe_x_min = x - self.__fire_range
        aoe_x_max = x + self.__fire_range
        aoe_y_min = y - self.__fire_range
        aoe_y_max = y + self.__fire_range
        
        for unit in units:
            if unit.in_area(aoe_x_min, aoe_y_min, aoe_x_max, aoe_y_max):
                in_blast.append(unit)
                
        return in_blast