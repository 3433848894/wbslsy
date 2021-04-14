#创建一个列表包含要覆盖的州，集合类似于列表，但不能包含重复的元素
states_needed = set(["mt","wa","or","id","nv","ut","ca","az"])

#创建可供选择的广播台清单，用散列表来表示它，键为可供选择的广播台清单，值为广播台覆盖的州
stations = {}
stations["kone"] = set(["id","nv","ut"])
stations["ktwo"] = set(["wa","id","mt"])
stations["kthree"] = set(["or","nv","ca"])
stations["kfour"] = set(["nv","ut"])
stations["kfive"] = set(["ca","az"])


#最后需要一个集合来存储最终选择的广播台
final_stations = set()
#遍历所有的广播台，选择覆盖了最多未覆盖州的广播台，存储在best_station中
while states_needed:
    best_station = None
    states_covered = set()
    for station,states_for_station in stations.items():
#states_covered是一个集合，包含该广播台覆盖的所有未覆盖的州。for循环迭代每个广播台，并确定它是否最佳
        covered = states_needed & states_for_station
#检查该广播台覆盖的州是否比best_station多
        if len(covered) > len(states_covered):
            best_station = station
            states_covered = covered

            
#在for循环结束后将best_station添加到最终的广播台列表中
    final_stations.add(best_station)
#更新states_needed,该广播台覆盖了一些州，因此不用覆盖这些州
    states_needed -= states_covered
#最后打印final_stations
print (final_stations)