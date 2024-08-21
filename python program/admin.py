users_name = ["admin", "kelvin", "victor", "kingsley", "jaden"]
for user_name in users_name:
    print(f"Good morning {user_name},how was ur day")

if user_name == "admin":
    print("hello admin, would you like to see a status report")
else:
    print("hello jaden, thank you for logining in again")  


users_name = []
if users_name:
    for user_name in users_name:
        if user_name == "admin":
            print("hello admin, would you like to see a status report")
        else:
            print("hello jaden, thank you for logining in again")  
else: 
    print("We need to find some users.")      