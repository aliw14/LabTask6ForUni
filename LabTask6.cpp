#include <iostream>
using namespace std;


int main() {
    int i, n;
    cout<<"Enter the number of publishers: ";
    cin>>n;
    struct publisher
{
    char name[40], genre[40],city[40];
};
    publisher fc[n];
    for(i=0; i<n; i++)
    {
    cout<<"Enter the name of publisher: ";
    cin>>fc[i].name;
    cout<<"Enter the genre of publisher: ";
    cin>>fc[i].genre;
    cout<<"Enter the city of football club: ";
    cin>>fc[i].city;
    }
    for(i=0; i<n; i++)
    {
    cout<<fc[i].name<<"\t";
    cout<<fc[i].genre<<"\t";
    cout<<fc[i].city<<"\n";
    }
    

    return 0;
}