alien_0 = {'color': 'green'}
print(alien_0['color'])

alien_0 = {'color': 'green', 'point': '5'}
new_point = alien_0['point']
print(f"you just earn {new_point} points")

print(alien_0)

alien_0['x_position'] = 0
alien_0['y_position'] = 25
print(alien_0)

# populating an empty list 
alien_1 = {}
alien_1['color'] = 'green'
alien_1['point'] = 5
print(alien_0)
print(f"The alien is now {alien_1['color']}")
 
#modifying a list
alien_1['color'] = 'yellow'
print(f"The alien is now {alien_1['color']}")