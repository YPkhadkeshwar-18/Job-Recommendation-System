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
    
    job["Doctor"] = {{15, "Calm"}, {25, "Study"}, {35, "Work_remotely"}, {45, "Both_passion_and_money"}};
    job["Poet"] = {{15, "Love_job"}, {25, "People_hangout"}, {35, "Analytical"}, {45, "Artistic"}};
    job["Professor"] = {{15, "Study"}, {25, "Good_communication"}, {35, "Monday_to_friday"}, {45, "Quiet_and_focused"}};
    job["Soldier"] = {{15, "Enthausistic"}, {25, "Positive_attitude"}, {35, "Hard_word"}, {45, "Adapting_surrounding"}};
    job["Engineer"] = {{15, "Innovative"}, {25, "Problem_solving_ability"}, {35, "Communication_skill"}, {45, "Team_work"}};
    job["Political"] = {{15, "Dealing_with_people"}, {25, "Decision_making_skills"}, {35, "Leadership"}, {45, "Communication_skill"}};
    job["Lawyer"] = {{15, "Research_skill"}, {25, "Confidence"}, {35, "Negoation_skill"}, {45, "Professionalism"}};
    job["Chef"] = {{15, "Passion_for_cooking"}, {25, "Taste_and_flavour_sensitivity"}, {35, "Adaptibility"}, {45, "Passion_for_hospitality"}};
    job["Author"] = {{15, "Love_to_writing"}, {25, "Creativiy"}, {35, "Imagination"}, {35, "Story_telling"}, {45, "Reading_habbit"}};
    job["Scientist"] = {{15, "Analytical_thinking"}, {25, "Research_skill"}, {35, "Problem_solving_ability"}, {45, "Curiosity"}};

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