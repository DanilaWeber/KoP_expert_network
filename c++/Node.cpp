#include <iostream>
#include <string>
#include "Node.h"

class Node{
public:
    Node(std::string i_exept){
        setlocale(LC_ALL,"RUS");
        exept = i_exept;
    }

    void add_child(Node &left, Node &right){
        leftChild = &left;
        rightChild = &right;
    }

    void show_exeption(){
        if (leftChild != NULL && rightChild != NULL)
        {
            std::cout<<exept<<" (enter Y/N)"<<std::endl;
        }
        else 
        {
            std::cout<<exept;
        }
    }

    Node get_left_child(){
        return *leftChild;
    }
    Node get_right_child(){
        return *rightChild;
    }

    bool have_child(){
        return leftChild != NULL && rightChild != NULL;
    }

private:
    std::string exept;
    Node* leftChild = NULL;
    Node* rightChild = NULL;
};