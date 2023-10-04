#include <bits/stdc++.h>
#define ll long long 
using namespace std;


bool comp(pair<int, pair<string, int>>a, pair<int, pair<string, int>>b)
{
    return a.first > b.first;
}

void solve()
{
    map<string, vector<pair<int, string>>>job;
    
    job["Doctor"] = {{15, "Calm"}, {25, "Both_passion_and_money"}, {35, "Work_remotely_with_colleagues"}, {45, "Study"}};
    job["Poet"] = {{15, "Reading/Writing"}, {25, "Love_your_job"}, {35, "Imagination_beyond_bound"}, {45, "Something_creative"}};
    job["Professor"] = {{15, "Monday_to_friday"}, {25, "Good_communication"}, {35, "Study"}, {45, "Quiet_and_focused"}};
    job["Soldier"] = {{15, "Positive_attitude"}, {25, "Enthausiastic"}, {35, "Hard_word"}, {45, "Adapting_surrounding"}};
    job["Engineer"] = {{15, "Team_work"}, {25, "Communication_skill"}, {35, "Innovative"}, {45, "Problem_solving_ability"}};
    job["Political"] = {{15, "Decision_making_skills"}, {25, "Communication_skill"}, {35, "Dealing_with_people"}, {45, "Leadership"}};
    job["Lawyer"] = {{15, "Confidence"}, {25, "Dealing_with_people"}, {35, "Negotiative"}, {45, "Research_skill"}};
    job["Chef"] = {{15, "Team_work"}, {25, "Something_creative"}, {35, "Love_your_job"}, {45, "Multitasking"}};
    job["Author"] = {{15, "Artistic"}, {25, "Something_creative"}, {35, "Reading/Writing"}, {45, "Imagination_beyond_bound"}};
    job["Scientist"] = {{15, "Analytical_thinking"}, {25, "Problem_solving_ability"}, {35, "Research_skill"}, {45, "Curiosity"}};

    job["Fashion_designer"] = {{15, "Both_passion_and_money"}, {25, "Perfect_planner"}, {35, "Love_your_job"}, {45, "Something_creative"}};
    job["Artist"] = {{15, "Work_from_home"}, {25, "Imagination_beyond_bound"}, {35, "Something_creative"}, {45, "Artistic"}};
    job["Philosopher"] = {{15, "Calm"}, {25, "Confidence"}, {35, "Positive_attitude"}, {45, "Good_communication"}};
    job["Government_servant"] = {{15, ""}, {25, "To_achieve_big_success"}, {35, "9 to 5 job"}, {45, "Study"}};


    
    job["Dancer"] = {{15, "Analytical_thinking"}, {25, "Problem_solving_ability"}, {35, "Research_skill"}, {45, "Flexible"}};
    job["Beautician"] = {{15, "Analytical_thinking"}, {25, "Problem_solving_ability"}, {35, "Research_skill"}, {45, "Curiosity"}};
    job["Actor"] = {{15, "Analytical_thinking"}, {25, "Problem_solving_ability"}, {35, "Research_skill"}, {45, "Curiosity"}};
    job["Manager"] = {{15, "Analytical_thinking"}, {25, "Problem_solving_ability"}, {35, "Research_skill"}, {45, "Curiosity"}};
    job["Architect"] = {{15, "Analytical_thinking"}, {25, "Problem_solving_ability"}, {35, "Research_skill"}, {45, "Curiosity"}};
    job["Astronaut"] = {{15, "Analytical_thinking"}, {25, "Problem_solving_ability"}, {35, "Research_skill"}, {45, "Curiosity"}}; 

    job["Judge"] = {{15, "Analytical_thinking"}, {25, "Problem_solving_ability"}, {35, "Research_skill"}, {45, "Curiosity"}};
    job["Businessman"] = {{15, "Analytical_thinking"}, {25, "Problem_solving_ability"}, {35, "Research_skill"}, {45, "Curiosity"}};
    job["Chartered_accountant"] = {{15, "Analytical_thinking"}, {25, "Problem_solving_ability"}, {35, "Research_skill"}, {45, "Curiosity"}};
    job["Sportsman"] = {{15, "Analytical_thinking"}, {25, "Problem_solving_ability"}, {35, "Research_skill"}, {45, "Curiosity"}};
    
    int n; cin >> n;
    string skill[n];
    for(int i = 0;i < n;i++) cin >> skill[i];
    vector<pair<int, pair<string, int>>>skillset_count;

    int ct = 0, score = 0;
    for(int i = 0;i < n;i++){
        string check = skill[i];
        for(auto it: job["Doctor"]){
        // cout << it.first << " " << it.second  << "\n";
        if(it.second == check) 
        {
            ct++;
            score += it.first;
        }
      }
    }
    skillset_count.push_back({score, {"Doctor", ct}});

    ct = 0, score = 0;
    for(int i = 0;i < n;i++){
        string check = skill[i];
        for(auto it: job["Poet"]){
        if(it.second == check) 
        {
            ct++;
            score += it.first;
        }
      }
    }
   skillset_count.push_back({score, {"Poet", ct}});

    ct = 0, score = 0;
    for(int i = 0;i < n;i++){
        string check = skill[i];
        for(auto it: job["Professor"]){
        if(it.second == check) 
        {
            ct++;
            score += it.first;
        }
      }
    }
    skillset_count.push_back({score, {"Professor", ct}});
  
    ct = 0, score = 0;
    for(int i = 0;i < n;i++){
        string check = skill[i];
        for(auto it: job["Soldier"]){
        if(it.second == check) 
        {
            ct++;
            score += it.first;
        }
      }
    }
    skillset_count.push_back({score, {"Soldier", ct}});
  
    ct = 0, score = 0;
    for(int i = 0;i < n;i++){
        string check = skill[i];
        for(auto it: job["Engineer"]){
        if(it.second == check) 
        {
            ct++;
            score += it.first;
        }
      }
    }
    skillset_count.push_back({score, {"Engineer", ct}});
  
    ct = 0, score = 0;
    for(int i = 0;i < n;i++){
        string check = skill[i];
        for(auto it: job["Political"]){
        if(it.second == check) 
        {
            ct++;
            score += it.first;
        }
      }
    }
    skillset_count.push_back({score, {"Political", ct}});
  
    ct = 0, score = 0;
    for(int i = 0;i < n;i++){
        string check = skill[i];
        for(auto it: job["Lawyer"]){
        if(it.second == check) 
        {
            ct++;
            score += it.first;
        }
      }
    }
    skillset_count.push_back({score, {"Lawyer", ct}});
  
    ct = 0, score = 0;
    for(int i = 0;i < n;i++){
        string check = skill[i];
        for(auto it: job["Chef"]){
        if(it.second == check) 
        {
            ct++;
            score += it.first;
        }
      }
    }
    skillset_count.push_back({score, {"Chef", ct}});
  
    ct = 0, score = 0;
    for(int i = 0;i < n;i++){
        string check = skill[i];
        for(auto it: job["Author"]){
        if(it.second == check) 
        {
            ct++;
            score += it.first;
        }
      }
    }
    skillset_count.push_back({score, {"Author", ct}});
  
    ct = 0, score = 0;
    for(int i = 0;i < n;i++){
        string check = skill[i];
        for(auto it: job["Scientist"]){
        if(it.second == check) 
        {
            ct++;
            score += it.first;
        }
      }
    }
    skillset_count.push_back({score, {"Scientist", ct}});

    sort(skillset_count.begin(), skillset_count.end(), comp);
    for(auto it: skillset_count){
        cout << it.first << " " << it.second.first << " " << it.second.second << "\n";
    }
}

int main(){   
   solve();
}
