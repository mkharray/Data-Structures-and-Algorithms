class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
     int time = 0;
    int i = 0;

    for( ;i <= tickets.size(); i++){
        if(i == tickets.size() && tickets[k] != 0)
        i = 0;
        else if (tickets[k] == 0)
        break;

        if(tickets[i] > 0){
        tickets[i]--;
        time++;
    }
    
    }
    return time;
    }
};