# Kattis
# Delicios Bubble Tea

# python3 bubbletea.py < test.in

import sys

int_list = (int(token) for token in sys.stdin.read().split())

num_teas = next(int_list)
tea_costs = []
for i in range(num_teas):
    tea_costs.append(next(int_list))

num_toppings = next(int_list)
topping_costs = []
for i in range(num_toppings):
    topping_costs.append(next(int_list))

min_cost_of_cup = 100000000
for i in range(num_teas):
    num_valid_toppings = next(int_list)
    for j in range(num_valid_toppings):
        valid_topping = next(int_list)
        cost_of_tea = tea_costs[i]
        cost_of_topping = topping_costs[valid_topping-1]
        cost_of_cup = cost_of_tea + cost_of_topping
        min_cost_of_cup = min(min_cost_of_cup, cost_of_cup)

amount_of_money = next(int_list)
cups_of_tea = amount_of_money // min_cost_of_cup
num_students = cups_of_tea-1
if num_students < 0: print(0)
else:print(num_students)