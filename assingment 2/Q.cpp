class Node {
public:
    int value;
    Node* next;
    Node(int value) {
        this->value = value;
        this->next = nullptr;
    }
};

class LinkedList {
public:
    Node* head;
    Node* tail;
    LinkedList() {
        this->head = nullptr;
        this->tail = nullptr;
    }
    void insert_at_head(int value) { 
        Node* new_node = new Node(value);
        if (this->head == nullptr) {
            this->head = new_node;
            this->tail = new_node;
        }
        else {
            new_node->next = this->head;
            this->head = new_node;
        }
    }
    void insert_at_tail(int value) {
        Node* new_node = new Node(value);
        if (this->tail == nullptr) {
            this->head = new_node;
            this->tail = new_node;
        }
        else {
            this->tail->next = new_node;
            this->tail = new_node;
        }
    }
    void print_head_tail() {
        cout << this->head->value <<" "<<this->tail->value<<endl;
    }
};

int main() {
    int Q;
    cin >> Q;
    LinkedList* linked_list = new LinkedList();
    for (int i = 0; i < Q; i++) {
        int X, V;
        cin >> X >> V;
        if (X == 0) {
            linked_list->insert_at_head(V);
        }
        else if (X == 1) {
            linked_list->insert_at_tail(V);
        }
        linked_list->print_head_tail();
    }
    return 0;
}