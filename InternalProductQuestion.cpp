#include<iostream>
#include<string>
using namespace std;

class PR{
    private:
        string name;
        string review;
        int rating;

    public:
        PR(){}
        PR(string n, string rev, int r): name(n),review(rev),rating(r){}

    void setProduct(string n, string rev, int r){
        name = n;
        review = rev;
        rating = r;
    }

    void displayProduct(){
        
        cout<< name << "\t";
        cout<< review << "\t";
        cout<< rating << endl;
    }   
};

int main(){
    PR products[10];
    int n, rating;
    string name, review;
    cout<<"Enter the number of products: ";
    cin>>n;

    for(int i=0; i<n; i++){
        cout<<"Enter the product name: ";
        cin>>name;
        cout<<"Enter the product review: ";
        cin>>review;
        cout<<"Enter the product rating: ";
        cin>>rating;

        products[i].setProduct(name, review, rating);
    }

    cout<<"\nProduct Reviews: \n";
    cout<<"Product Name\tReview\tRating\n";
    for(int i=0; i<n; i++){
        products[i].displayProduct();
    }
    return 0;
}