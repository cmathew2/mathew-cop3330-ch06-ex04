#include "std_lib_facilities.h"

class Name_Value {
    public:
        string name;
        int value; 
};

int main()
{
     cout << "Enter name-and-value pairs, like 'Joe 17'. Terminate with NoName 0\n";

    vector<Name_Value> pairs;
    string name = "";
    int value; 

    while ((cin>>name>>value) && (name != "NoName" && value !=0))
    {
        for (int i = 0; i<pairs.size(); i++)
            if (name == pairs[i].name) 
                error ("Error: Name '" + name + "' introduced twice.\n");
                return 1;
         pairs.push_back(Name_Value {name, value});       
    }

    for (int i = 0; i<pairs.size(); ++i) {
        cout << "(" << pairs[i].name << ',' << pairs[i].value << ")\n";
    }
    return 0;
}
