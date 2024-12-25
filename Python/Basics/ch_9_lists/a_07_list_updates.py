def smelt_ore(inventory):
    print(f"Inventory: {inventory}")

    # don't touch above this line

    if inventory[1] == "Iron Ore":
        inventory[1] = "Iron Bar"
        return inventory
    # don't touch below this line

    return inventory
