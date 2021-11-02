#include<iostream>
using namespace std;

//Product (Shopping Website)
class Product{  //a class never takes memory untill and unless you create its object. 
    int id;  //4
    char name[200];  //100
    int mrp;  //4
    int selling_price;  //4

public:
    //Constructor
    Product(){   //constructor overloading has been done here as we have declared contructor 2 times, but only one will get executed
        //cout<<"Inside contructor";
    }
    //Parameterised Contructor
    Product(int id,char *n,int mrp,int selling_price){
        this->id = id;   //----->this is a special pointers which points to the current object
        this->mrp = mrp;
        this->selling_price = selling_price;
        strcpy(name,n);
    }
    Product(Product &X){
        //Create to copy
        id = X.id;
        strcpy(name,X.name);
        mrp = X.mrp;
        selling_price = X.selling_price;
    }
    //Setters
    void setMrp(int price){
        mrp = price;
    }
    void setSellingPrice(int price){
        //additional checks
        if(price>mrp){
            selling_price = mrp;
        }
        else{
            selling_price = price;
        }
    }
    //Getters
    int getMrp(){
        return mrp;
    }
    int getSellingPrice(){
        return selling_price;
    }
    void showDetails(){
        cout<<"Name:"<<name<<endl;
        cout<<"Id:"<<id<<endl;
        cout<<"Selling Price"<<selling_price<<endl;
        cout<<"MRP :"<<mrp<<endl;
    }
    
};

int main(){
    Product camera;//--->here first constructor gets executed //this camera is an object you have created
    Product camera(101,"GoProHero9",28000,26000); //----->here the second code of constructor gts executed
    camera.showDetails();
    
    //Copy is made using a special constructor ---> copy contructor
    Product webcam(camera);  //Copy Contructor
    Product handycam = camera;
    camera.showDetails();
    webcam.showDetails();

    // selling_price <= mrp
    // camera.mrp = 100;
    // camera.selling_price = 200;     //we are able to modify these coz they are declared publicly.
    // camera.setMrp(100);
    // camera.setSellingPrice(200);

    cout<< sizeof(camera)<<endl; //it takes 112 bytes of space
    cout<<"MRP"<<camera.getMrp()<<endl; //if we want to know the mrp of camera then we use . operator and we can only access the mrp if it is publicly declared.
    cout<<"Selling price"<<camera.getSellingPrice()<<endl;
}