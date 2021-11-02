//file:Hashtable.h

template<typename T>
class Node{
public:
    string key;
    T value;
    Node* next;

    Node(string key, T value){
        this-key = key;
        this->value = value;
        next = NULL;
    }
};

class Hastable{

    Node<T> ** table;
    int cs; //total entries that have been inserted
    int ts; // size of table
public:
    Hastable(int default_size = 7){
        cs = 0;
        ts = default_size;

        table = new Node<T>*[ts];

        for(int i=0;i<ts;i++){
            table[i] = NULL;
        }
    }
    void insert (string key, T val){

    }
};