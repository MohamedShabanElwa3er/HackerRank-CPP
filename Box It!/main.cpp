#include<bits/stdc++.h>

using namespace std;


class Box 
{
    private:
    int l,b,h;
    public:
    Box(){ l=b=h=0;}
    Box(int length, int breadth, int height):l(length),b(breadth),h(height){}
    Box(Box &B)
    {
        this->l = B.l;
        this->b = B.b;
        this->h = B.h;
    }
    int getLength() {return l;}
    int getBreadth(){return b;}
    int getHeight() {return h;}
    long long CalculateVolume(){return static_cast<long long>(l)*b*h;}
    
    bool operator<(Box &ref)
    {
        if (this->l < ref.l) {  return true ;}
        else if ((this->b < ref.b) && (this->l == ref.l)) {  return true ;}
        else if ((this->h < ref.h) && (this->b == ref.b)&& (this->l == ref.l))
         {  return true ;}
        return false;
    }
    friend ostream& operator<<(ostream &ref , Box B);
    
};

ostream& operator<<(ostream &ref , Box B)
{
    ref<<B.l<<" "<<B.b<<" "<<B.h;
    return ref;
}


void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}
