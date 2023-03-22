int getElement(Node *head, int index){
    Node *tmp = head;
    int i = 0;
    while(i < index){
        tmp = tmp->nextNode;
        i++;
    }
    return tmp->value;
}