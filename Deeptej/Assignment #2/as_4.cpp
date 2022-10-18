#include <iostream>
using namespace std;

class ballot
{
    static int spoilt;
    static int c[5];

public:
    static void getvote(void);
    static void display(void);
};

int ballot::spoilt;
int ballot::c[5];

void ballot::getvote()
{
    cout << "Enter the number corresponding to the candidate\n";
    int vote;
    cin >> vote;
    switch (vote)
    {
    case 1:
        c[0]++;
        break;
    case 2:
        c[1]++;
        break;
    case 3:
        c[2]++;
        break;
    case 4:
        c[3]++;
        break;
    case 5:
        c[4]++;
        break;
    default:
        spoilt++;
        break;
    }
}

void ballot::display(){
    cout<<"The votes are as follows\n";
    cout<<"Candidate 1: "<<c[0]<<endl;
    cout<<"Candidate 2: "<<c[1]<<endl;
    cout<<"Candidate 3: "<<c[2]<<endl;
    cout<<"Candidate 4: "<<c[3]<<endl;
    cout<<"Candidate 5: "<<c[4]<<endl;
    cout<<"---------------------"<<endl;
    cout<<"Spoilt votes: "<<spoilt<<endl;
}

int main(int argc, char const *argv[])
{
    cout<<"Enter the number of voters/ballot papers\n";
    int n;
    cin>>n;
    cout<<"------------------"<<endl;
    cout<<"Candidate A  -  1"<<endl;
    cout<<"Candidate B  -  2"<<endl;
    cout<<"Candidate C  -  3"<<endl;
    cout<<"Candidate D  -  4"<<endl;
    cout<<"Candidate E  -  5"<<endl;
    cout<<"------------------"<<endl;
    while(n--)
        ballot::getvote();
    ballot::display();
    return 0;
}
