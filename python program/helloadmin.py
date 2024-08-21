users_name = ["admin", "kelvin", "victor", "kingsley", "jaden"]
for user_name in users_name:
	print(f"Good morning {user_name},how was ur day")

if users_name:
	user_name = users_name[0]
	print( f"\nhello {user_name}, would you like to see a status report")
else:
	user_name = users_name[4]
	print(f"hello{user_name}, thank you for logining in again")