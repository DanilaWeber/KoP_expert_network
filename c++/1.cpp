#include <iostream>
#include <string>
#include "Node.cpp"

int main(){
    setlocale(LC_ALL,"utf-8");

    Node nodes[9] = {Node("Feeds milk?"), Node("Is there grain?"),
     Node("Is there a guest?"), Node("Eating meat?"), 
     Node("Predator"), Node("Bird"), Node("lizard"), 
     Node("Omnivorous"), Node("Herbivore")};
    nodes[0].add_child(nodes[1],nodes[2]);
    nodes[1].add_child(nodes[3],nodes[4]);
    nodes[2].add_child(nodes[5],nodes[6]);
    nodes[3].add_child(nodes[7],nodes[8]);
    
    bool work = true;
    Node currentNode = nodes[0];
    char input;
    
    do {
        work = currentNode.have_child();
        currentNode.show_exeption();
        if(work)
        {
        std::cin>>input;
        }
        if(input == 'y')
        {
            currentNode = currentNode.get_left_child();
        } 
        else if (input == 'n')
        {
            currentNode = currentNode.get_right_child();
        }
    } while(work);
    
} 