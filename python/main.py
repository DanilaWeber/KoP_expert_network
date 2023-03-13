import node
Node = node.Node

nodes = [Node('Кормит молоком?'), Node('Есть перья?'), Node('Ест зерно?'), Node('Ящерица'), Node('Птица'), Node('Хищник'), Node('Ест мясо?'), Node('Травоядное'), Node('Всеядное')]
nodes[0](nodes[1],nodes[2])
nodes[1](nodes[3],nodes[4])
nodes[2](nodes[5],nodes[6])
nodes[6](nodes[7],nodes[8])

currentNode = nodes[0]
work = currentNode.node_have_childs()

while work:
    currentNode.show_exeption()
    work = currentNode.node_have_childs()
    if work:
        i = input()
    if str.lower(i) == 'n':
        currentNode = currentNode.get_left_child()
    elif str.lower(i) == 'y':
        currentNode = currentNode.get_right_child()
    else:
        print('Ошибка. Неиспользуются стандартные выражения.')
