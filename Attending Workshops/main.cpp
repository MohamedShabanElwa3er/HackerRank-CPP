#include<bits/stdc++.h>

using namespace std;

//Define the structs Workshops and Available_Workshops.
//Implement the functions initialize and CalculateMaxWorkshops

struct Workshop 
{
    int start_time=0;
    int duration=0;
    int end_time=0;
};
struct Available_Workshops
{
    int n;
    std::vector<Workshop> v;
};
Available_Workshops* initialize (int start_time[], int duration[], int n)
{
    Available_Workshops * obj = new Available_Workshops ;
    obj->n = n;
    obj->v.resize(n);
    for(int i=0 ; i<n ; i++)
    {
        obj->v[i].start_time = start_time[i];
        obj->v[i].duration = duration[i];
        obj->v[i].end_time = start_time[i] + duration[i];
    }
    return obj;
}
int CalculateMaxWorkshops(Available_Workshops* ptr)
{
    int n = ptr->n ;
    int it_1 = 1 ;
    int it_2 = 0 ;
    int number_of_allowed_workshops = 1 ;
    std::sort(ptr->v.begin(),ptr->v.end(),[](const Workshop &a , const Workshop &b)
    {return a.end_time < b.end_time;});
    while(it_1<n)
    {
        if(ptr->v[it_1].start_time >= ptr->v[it_2].end_time)
        {
            number_of_allowed_workshops++;
            it_2=it_1;
        }
        it_1++;
    }
    return number_of_allowed_workshops;
    
}
int main(int argc, char *argv[]) {
    int n; // number of workshops
    cin >> n;
    // create arrays of unknown size n
    int* start_time = new int[n];
    int* duration = new int[n];

    for(int i=0; i < n; i++){
        cin >> start_time[i];
    }
    for(int i = 0; i < n; i++){
        cin >> duration[i];
    }

    Available_Workshops * ptr;
    ptr = initialize(start_time,duration, n);
    cout << CalculateMaxWorkshops(ptr) << endl;
    return 0;
}
