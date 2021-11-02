//Declaration of a class
//class can have variables and methods

class Car{
    int price;
    int model_id;      //all these variables are by default private
    char name[200];

    public:

    void show(){
        //Display Details of th car
        cout<<"Name"<<name<<"model_id"<<endl;
    }

    void update_price(){
        //Logic ...
    }
}
