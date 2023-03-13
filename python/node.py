class Node:
    def __init__(self, exeption:str):
        self.exept = exeption
        self.leftChild = None
        self.rightChild = None
        pass
    def __call__(self, leftChild, rightChild):
        self.leftChild = leftChild
        self.rightChild = rightChild
        pass
    def show_exeption(self):
        if self.leftChild != None and self.rightChild != None:
            print(self.exept + ' (введите Y/n)')
        else:
            print(self.exept)
        pass
    def get_left_child(self):
        return self.leftChild
    def get_right_child(self):
        return self.rightChild
    def node_have_childs(self):
        return self.leftChild != None and self.rightChild != None