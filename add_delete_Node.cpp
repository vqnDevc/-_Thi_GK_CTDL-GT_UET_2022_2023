Node* addNode(Node* head, int index, int value) {
    Node* new_node = new Node;
    new_node->value = value;
    new_node->nextNode = NULL;
    if (index == 0) {
        new_node->nextNode = head;
        return new_node;
    }
    Node* current_node = head;
    for (int i = 0; i < index - 1; i++) {
        current_node = current_node->nextNode;
        if (current_node == NULL) {
            return head;
        }
    }
    new_node->nextNode = current_node->nextNode;
    current_node->nextNode = new_node;
    return head;
}

Node* deleteNode(Node* head, int index){
    if(index == 0){
        Node *tmp = head;
        head = head->nextNode;
        delete tmp;
    }else{
        Node * current_node = head;
        for(int i = 0; i < index - 1; i++){
            current_node = current_node->nextNode;
            if(current_node == NULL ){
                return head;
            }
        }
        Node *delete_node = current_node->nextNode;
        current_node->nextNode = delete_node->nextNode;
    }
    return head;
}