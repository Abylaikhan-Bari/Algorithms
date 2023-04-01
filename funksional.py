# В первой строке содержится число N — число элементов в словаре.
# Дан список (словарь) стран и рек, протекающих в каждой стране.
# Затем даны названия рек	(в виде списка). Выполните задания:
# 1)	Для каждой реки укажите, в какой стране она протекает.
# 2) Проверьте, есть ли введенное назван ие реки в словаре (вывести есть или нет)
# 3) Добавьте новую пару страна-река в словарь.

# Sanyn anyqtaimyz

n = int(input("Jalpy sany: "))

# Bos sozdik jasaimyz
dictionary = {}

# El men ozen attaryn engizu
for i in range(n):
    country, river = input("El men ozen engiziniz: ").split()
    if country not in dictionary:
        dictionary[country] = [river]
    else:
        dictionary[country].append(river)

# Tekseretin ozen atyn engizu
check_river = input("Tekseretin ozen atyn engiziniz: ")

# Tekseru
if any(check_river in rivers for rivers in dictionary.values()):
    print("Bar")
else:
    print("Joq")

# Jana aqparat engizu
new_country, new_river = input("Jana el men ozen engiziniz: ").split()
if new_country not in dictionary:
    dictionary[new_country] = [new_river]
else:
    dictionary[new_country].append(new_river)

# Barlygyn shygaru
for river in sorted(set(sum(dictionary.values(), []))):
    for country, rivers in dictionary.items():
        if river in rivers:
            print(f"{river} - {country}")
