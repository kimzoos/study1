#include <iostream>

#include <string>
#include <vector>
#include <map>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";

    map<string, int> temp;
   
    for (vector<string>::iterator it = participant.begin(); it != participant.end(); it++)
    {
        if (temp.find(*it) != temp.end())
        {
            temp[*it]++;;
        }
        else
        {
            temp.insert(map<string, int>::value_type(*it, 1));
        }
    }

    for (vector<string>::iterator it = completion.begin(); it != completion.end(); it++)
    {
        if (temp.find(*it) != temp.end())
        {
            temp[*it]--;

            if (temp[*it] == 0)
            {
                temp.erase(temp.find(*it));
            }
        }
    }
    


    return temp.begin()->first;
}

int main()
{
    vector<string> participant;
    vector<string> completion;

    participant.push_back("leo");
    participant.push_back("kiki");
    participant.push_back("leo");
    participant.push_back("eden");

    completion.push_back("kiki");
    completion.push_back("eden");
    completion.push_back("leo");

    string answer = solution(participant, completion);

    cout << answer << endl;
}

