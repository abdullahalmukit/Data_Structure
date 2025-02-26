#include <bits/stdc++.h>
using namespace std;

class Student 
{
    public:
    string name;
    int roll;
    int marks;
    Student(string name, int roll, int marks) 
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class cmp 
{
    public:
    bool operator()(Student& l, Student& r) 
    {
        if (l.marks == r.marks)
        {
            return l.roll > r.roll; 
        }
        return l.marks < r.marks;  
    }
};

int main() 
{
    int n;
    cin >> n;
    priority_queue<Student, vector<Student>, cmp> q;

    for (int i = 0; i < n; i++) 
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        Student obj(name, roll, marks);
        q.push(obj);
    }

    int p;
    cin >> p;

    while (p--) 
    {
        int com;
        cin >> com;

        if (com == 0) 
        { 
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            Student obj(name, roll, marks);
            q.push(obj);
            if (!q.empty()) 
            {
                cout << q.top().name << " " << q.top().roll << " " << q.top().marks << endl;
            }
        } 
        else if (com == 1) 
        { 
            if (q.empty()) 
            {
                cout << "Empty" << endl;
            } 
            else 
            {
                cout << q.top().name << " " << q.top().roll << " " << q.top().marks << endl;
            }
        } 
        else if (com == 2) 
        { 
            if (q.empty()) 
            {
                cout << "Empty" << endl;
            } 
            else 
            {
                q.pop();
                if (q.empty()) 
                {
                    cout << "Empty" << endl;
                } 
                else 
                {
                    cout << q.top().name << " " << q.top().roll << " " << q.top().marks << endl;
                }
            }
        }
    }

    return 0;
}

