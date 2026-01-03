//C++ program showing multiple
// inheritance, used to generate a royalty count based on price of the publication.
#include<iostream>
#include<string>
using namespace std;

class Publication{
    string title;
    float price;
    public:
    void setTitle(){
        cout<<"Enter title of the Publication: "<<endl;
      getline(cin,title);
    }
    string getTitle(){
        return title;
    }
    
    void setPrice(){
        cout<<"Enter price of the Publication: "<<endl;
        cin>>price;
    }
    float getPrice(){
        return price;
    }

};
class Sales{
    int copiesSold;
    public:
     void setSales(){
        cout<<"Enter number of copies sold "<<endl;
        cin>>copiesSold;
    }
    int getSales(){
        return copiesSold;
    }
};
class Royalty : public Publication, public Sales{
    float royalty;
    public:
    void display(){
        royalty = getPrice()*getSales()*0.10;
        cout<<"Title of the publication: "<<getTitle()<<endl;
        cout<<"Price of the publication: "<<getPrice()<<endl;
        cout<<"Number of copies sold: "<<getSales()<<endl;
        cout<<"Royalty count: "<<royalty<<endl;
    }
};
int main(){
    Royalty r;
    r.setTitle();
    r.setPrice();
    r.setSales();
    r.display();
    return 0;
}
